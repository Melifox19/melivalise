#ifndef CCOMXBEE_H
#define CCOMXBEE_H

#include <QObject>
#include <QSerialPort>
#include <QRegularExpression>

class cComXbee : public QObject
{
    Q_OBJECT
public:
    explicit cComXbee(QObject *parent = nullptr);

private slots:
    void on_lireXbee();
    void on_ecrireXbee(QString message);
    void on_error();

private:
    QSerialPort serialPort;
    QString buffer;
    QRegularExpression requestRE;
};

#endif // CCOMXBEE_H
