#include "ccomxbee.h"
#include <QtSerialPort/QSerialPortInfo>
#include <QDebug>
#include <QJsonObject>
#include <QJsonDocument>
#include <QRegularExpression>

cComXbee::cComXbee(QObject *parent) : QObject(parent)
{
    serialPort.setBaudRate(QSerialPort::Baud9600);
    serialPort.setParity(QSerialPort::Parity::NoParity);
    serialPort.setDataBits(QSerialPort::Data8);
    serialPort.setPortName("/dev/ttyUSB0");

    requestRE.setPattern("^\\?[1-8];");
    if (requestRE.isValid())
    {
        qDebug() << "Regex valide";
    } else {
        qDebug() << "Regex non valide";
    }

    //connect(&serialPort, &QSerialPort::errorOccurred, this, &cComXbee::on_error);
    connect(&serialPort, &QSerialPort::readyRead, this, &cComXbee::on_lireXbee);

    if (serialPort.open(QIODevice::ReadWrite))
    {
        qDebug() << "Serial port open : success";
    }
    else {
        qDebug() << "Serial port open : error";
    }
}

void cComXbee::on_lireXbee()
{
    // Copie de l'entrée du port série dans un buffer
    buffer = serialPort.readAll();
    qDebug() << buffer;

    // Répond le JSON à chaque requête
    if (buffer.contains(requestRE))
    {
        qDebug() << "Tu as un match !";
        QStringRef numeroMeliruche(&buffer, 1,1);
        qDebug() << "Numero Meliruche :" << numeroMeliruche;
    } else {
      qDebug() << "N'est pas une requete";
    }
    QJsonObject messageJson
    {
      {"num","1"},
        {"tint","25.5"},
        {"text","33.0"},
        {"mas","120.4"},
        {"bat","50"},
        {"hum","45"},
        {"pres","1015"}
    };
    //QJsonDocument doc(messageJson);
    //QString message(doc.toJson(QJsonDocument::Compact));
    //on_ecrireXbee(message);
}

void cComXbee::on_ecrireXbee(QString message)
{
    // Conversion de la QString en QByteArray
    QByteArray messageBA;
    messageBA.append(message);
    qDebug() << messageBA;

    serialPort.write(messageBA);
}

void cComXbee::on_error()
{

}
