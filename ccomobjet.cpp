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

void cComObjet::setPoids(float poids)
{
    this->poids = poids;
}

float cComObjet::getPoids()
{
    return this->poids;
}

void cComObjet::setBatterie(float batterie)
{
    this->batterie = batterie;
}

float cComObjet::getBatterie()
{
    return this->batterie;
}

void cComObjet::setInterieurTemperature(float temperature)
{
    this->interieurTemperature = temperature;
}

float cComObjet::getInterieurTemperature()
{
    return this->interieurTemperature;
}

void cComObjet::setInterieurHygrometrie(float hygrometrie)
{
    this->interieurHygrometrie = hygrometrie;
}

float cComObjet::getInterieurHygrometrie()
{
    return this->interieurHygrometrie;
}

void cComObjet::setExterieurTemperature(float temperature)
{
    this->exterieurTemperature = temperature;
}

float cComObjet::getExterieurTemperature()
{
    return  this->exterieurTemperature;
}

void cComObjet::setExterieurHygrometrie(float hygrometrie)
{
    this->exterieurHygrometrie = hygrometrie;
}

float cComObjet::getExterieurHygrometrie()
{
    return this->exterieurHygrometrie;
}
