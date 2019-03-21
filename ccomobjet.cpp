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

void cComObjet::setInterieurHygrometrie(double hygrometrie)
{
    this->interieurHygrometrie = hygrometrie;
}

double cComObjet::getInterieurHygrometrie()
{
    return this->interieurHygrometrie;
}

void cComObjet::setExterieurTemperature(double temperature)
{
    this->exterieurTemperature = temperature;
}

double cComObjet::getExterieurTemperature()
{
    return  this->exterieurTemperature;
}

void cComObjet::setExterieurHygrometrie(double hygrometrie)
{
    this->exterieurHygrometrie = hygrometrie;
}

double cComObjet::getExterieurHygrometrie()
{
    return this->exterieurHygrometrie;
}

void cComObjet::setEssaimage200(bool essaimage)
{
   this->essaimage200 = essaimage;
}

bool cComObjet::getEssaimage200()
{
    return this->essaimage200;
}

void cComObjet::setEssaimage400(bool essaimage)
{
    this->essaimage400 = essaimage;
}

bool cComObjet::getEssaimage400()
{
    return this->essaimage400;
}
