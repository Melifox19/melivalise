#ifndef COMOBJET_H
#define COMOBJET_H

#include <QObject>

class cComObjet : public QObject
{
    Q_OBJECT
public:
    cComObjet(QObject *parent = nullptr);

    void setNumero               (int numero);
    int  getNumero               ();

    void setPoids                (int poids);
    int  getPoids                ();

    void setBatterie             (int batterie);
    int  getBatterie             ();

    void setInterieurTemperature (int temperature);
    int  getInterieurTemperature ();
    void setInterieurHygrometrie (int hygrometrie);
    int  getInterieurHygrometrie ();

    void setExterieurTemperature (int temperature);
    int  getExterieurTemperature ();
    void setExterieurHygrometrie (int hygrometrie);
    int  getExterieurHygrometrie ();

private:
    int numero               = 1;
    int poids                = 85;
    int batterie             = 90;
    int interieurTemperature = 20;
    int interieurHygrometrie = 90;
    int exterieurTemperature = 25;
    int exterieurHygrometrie = 90;
};

#endif // COMOBJET_H
