#include "ccomxbee.h"
#include "globalobjects.h"
#include <QtSerialPort/QSerialPortInfo>
#include <QDebug>
#include <QJsonObject>
#include <QJsonDocument>
#include <QRegularExpression>
#include <QMessageBox>

cComXbee::cComXbee(QObject *parent) : QObject(parent)
{
    // Paramètres pour le port série
    serialPort.setBaudRate(QSerialPort::Baud9600);
    serialPort.setParity(QSerialPort::Parity::NoParity);
    serialPort.setDataBits(QSerialPort::Data8);
    serialPort.setPortName("/dev/ttyUSB0");

    // Définition de la regex validant les requêtes de la Méliborne
    requestRE.setPattern("^\\?[0-7];");

    //connect(&serialPort, &QSerialPort::errorOccurred, this, &cComXbee::on_error);
    connect(&serialPort, &QSerialPort::readyRead, this, &cComXbee::on_lireXbee);

    // Vérification que le port série est bien disponible en RW
    if (serialPort.open(QIODevice::ReadWrite))
    {
        qDebug() << "Serial port open : success";
    }
    else {
        qDebug() << "Serial port open : error";
        QMessageBox msgBox;
        msgBox.setText("Ouverture du port série : erreur");
        msgBox.exec();
        emit sig_journalisation("Erreur");
    }
}

void cComXbee::on_lireXbee()
{
    // Copie de l'entrée du port série dans un buffer
    buffer = serialPort.readAll();
    qDebug() << buffer;

    // Répond le JSON à chaque requête valide
    if (buffer.contains(requestRE))
    {
        QStringRef numeroMeliruche(&buffer, 1,1);
        qDebug() << "Numero Meliruche :" << numeroMeliruche;

        // Réponse uniquement au numéro demandé
        if (numeroMeliruche.toInt() == tunnel->getNumero())
        {
            // JSON template pour la réponse
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
            // Mise à jour du JSON répondu avec les valeurs utilisateur
            auto iterator = messageJson.find("num");
                messageJson.erase(iterator);
                messageJson.insert("num", tunnel->getNumero());
            iterator = messageJson.find("tint");
                messageJson.erase(iterator);
                messageJson.insert("tint", tunnel->getInterieurTemperature());
            iterator = messageJson.find("text");
                messageJson.erase(iterator);
                messageJson.insert("text", tunnel->getExterieurTemperature());
            iterator = messageJson.find("mas");
                messageJson.erase(iterator);
                messageJson.insert("mas", tunnel->getMasse());
            iterator = messageJson.find("bat");
                messageJson.erase(iterator);
                messageJson.insert("bat", tunnel->getBatterie());
            iterator = messageJson.find("hum");
                messageJson.erase(iterator);
                messageJson.insert("hum", tunnel->getHumidite());
            iterator = messageJson.find("pres");
                messageJson.erase(iterator);
                messageJson.insert("pres", tunnel->getPression());

            // Préparation de la réponse
            QJsonDocument doc(messageJson);
            QString message(doc.toJson(QJsonDocument::Compact));

            // Envoi de la réponse
            on_ecrireXbee(message);
        }
    } else { // Réponse si une requete n'est pas considérée comme valide
        qDebug() << "N'est pas une requete";
    }
}

void cComXbee::on_ecrireXbee(QString message)
{
    // Conversion de la QString en QByteArray
    QByteArray messageBA;
    messageBA.append(message);
    qDebug() << messageBA;
    emit sig_journalisation(messageBA);

    // Écriture du message dans le port série
    serialPort.write(messageBA);
}

void cComXbee::on_error()
{

}
