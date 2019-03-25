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

void cComObjet::setPoids(double poids)
{
    this->poids = poids;
}

double cComObjet::getPoids()
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

void cComObjet::setInterieurTemperature(double temperature)
{
    this->interieurTemperature = temperature;
}

double cComObjet::getInterieurTemperature()
{
    return this->interieurTemperature;
}

void cComObjet::setExterieurTemperature(double temperature)
{
    this->exterieurTemperature = temperature;
}

double cComObjet::getExterieurTemperature()
{
    return  this->exterieurTemperature;
}

void cComObjet::setHumidite(int humidite)
{
    this->humidite = humidite;
}

int cComObjet::getHumidite()
{
    return this->humidite;
}

void cComObjet::setPression(int pression)
{
    this->pression = pression;
}

int cComObjet::getPression()
{
    return this->pression;
}
