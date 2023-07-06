/**
 *  Fichier ComportementHumain.hpp
 *  INterface pour l'implémentation concrète de Comportement Humain
 * 
 * **/
#pragma once 
#include "IComportement.hpp"
#include "ComportementDecorateur.hpp"
#include "Consommer.hpp"
#include "Humain.hpp"
class ComportementHumain :  virtual IComportement, ComportementDecorateur
{
private:
    Humain* acteur;
 
public:
    ComportementHumain(Humain &h);
    ~ComportementHumain();
    void action() override;
    Humain* getHumainInstance() override;
};


