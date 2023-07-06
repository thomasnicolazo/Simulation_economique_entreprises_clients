/**
 * Fichier ComportementDecorateur.h
 * 
 * Implémentation du décorateur pour les comportements
 * 
 * **/
#pragma once
#include "IComportement.hpp"
#include "vector"

class ComportementDecorateur : virtual IComportement 
{
protected:
    std::vector<IComportement*> comportements;
public:
    ComportementDecorateur();
    virtual ~ComportementDecorateur();
    virtual void action() ;
};

