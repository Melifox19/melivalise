#ifndef COMOBJET_H
#define COMOBJET_H

#include <QObject>

class cComObjet : public QObject
{
    Q_OBJECT
public:
    cComObjet(QObject *parent = nullptr);

    void    setNumero               (int numero);
    int     getNumero               ();

    void    setPoids                (double poids);
    double  getPoids                ();

    void    setBatterie             (int batterie);
    int     getBatterie             ();

    void    setInterieurTemperature (double temperature);
    double  getInterieurTemperature ();

    void    setExterieurTemperature (double temperature);
    double  getExterieurTemperature ();

    void    setHumidite             (int humidite);
    int     getHumidite             ();

    void    setPression             (int pression);
    int     getPression             ();


private:
    // Ce sont les valeurs par défaut, celles chargées par l'IHM
    int    numero               = 1;
    double poids                = 85;
    int    batterie             = 90;
    double interieurTemperature = 20;
    double exterieurTemperature = 25;
    int    humidite             = 90;
    int    pression             = 1015;
};

#endif // COMOBJET_H
