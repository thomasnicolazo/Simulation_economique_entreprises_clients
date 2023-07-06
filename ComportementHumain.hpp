/**
 *  Fichier ComportementHumain.hpp
 *  INterface pour l'implémentation concrète de Comportement Humain
 * 
 * **/
#pragma once 
#include "IComportement.hpp"
#include "ComportementDecorateur.hpp"
#include "Acheter.hpp"
class ComportementHumain :  virtual IComportement, ComportementDecorateur
{

 
public:
    ComportementHumain(/* args */);
    ~ComportementHumain();
    void action() override;
};


