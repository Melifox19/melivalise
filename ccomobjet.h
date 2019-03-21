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

    void setPoids                (float poids);
    float  getPoids                ();

    void setBatterie             (float batterie);
    float  getBatterie             ();

    void setInterieurTemperature (float temperature);
    float  getInterieurTemperature ();
    void setInterieurHygrometrie (float hygrometrie);
    float  getInterieurHygrometrie ();

    void setExterieurTemperature (float temperature);
    float  getExterieurTemperature ();
    void setExterieurHygrometrie (float hygrometrie);
    float  getExterieurHygrometrie ();

private:
    int numero                 = 1;
    float poids                = 85;
    float batterie             = 90;
    float interieurTemperature = 20;
    float interieurHygrometrie = 90;
    float exterieurTemperature = 25;
    float exterieurHygrometrie = 90;
};

#endif // COMOBJET_H
