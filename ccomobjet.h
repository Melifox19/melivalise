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

    void setPoids                (double poids);
    double  getPoids                ();

    void setBatterie             (double batterie);
    double  getBatterie             ();

    void setInterieurTemperature (double temperature);
    double  getInterieurTemperature ();
    void setInterieurHygrometrie (double hygrometrie);
    double  getInterieurHygrometrie ();

    void setExterieurTemperature (double temperature);
    double  getExterieurTemperature ();
    void setExterieurHygrometrie (double hygrometrie);
    double  getExterieurHygrometrie ();

private:
    int numero                  = 1;
    double poids                = 85;
    double batterie             = 90;
    double interieurTemperature = 20;
    double interieurHygrometrie = 90;
    double exterieurTemperature = 25;
    double exterieurHygrometrie = 90;
};

#endif // COMOBJET_H
