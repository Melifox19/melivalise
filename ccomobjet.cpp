#include "ccomobjet.h"

cComObjet::cComObjet(QObject *parent) : QObject (parent)
{

}

void cComObjet::setNumero(int numero)
{
    this->numero = numero;
}

int cComObjet::getNumero()
{
    return this->numero;
}

void cComObjet::setPoids(int poids)
{
    this->poids = poids;
}

int cComObjet::getPoids()
{
    return this->poids;
}

void cComObjet::setBatterie(int batterie)
{
    this->batterie = batterie;
}

int cComObjet::getBatterie()
{
    return this->batterie;
}

void cComObjet::setInterieurTemperature(int temperature)
{
    this->interieurTemperature = temperature;
}

int cComObjet::getInterieurTemperature()
{
    return this->interieurTemperature;
}

void cComObjet::setInterieurHygrometrie(int hygrometrie)
{
    this->interieurHygrometrie = hygrometrie;
}

int cComObjet::getInterieurHygrometrie()
{
    return this->interieurHygrometrie;
}

void cComObjet::setExterieurTemperature(int temperature)
{
    this->exterieurTemperature = temperature;
}

int cComObjet::getExterieurTemperature()
{
    return  this->exterieurTemperature;
}

void cComObjet::setExterieurHygrometrie(int hygrometrie)
{
    this->exterieurHygrometrie = hygrometrie;
}

int cComObjet::getExterieurHygrometrie()
{
    return this->exterieurHygrometrie;
}
