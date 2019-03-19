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

    void setExterieurTemperature (int tempature);
    int  getExterieurTemperature ();
    void setExterieurHygrometrie (int hygrometrie);
    int  getExterieurHygrometrie ();
};

#endif // COMOBJET_H
