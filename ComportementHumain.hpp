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
class IComportement;
class ComportementDecorateur;
class ComportementHumain :  public virtual IComportement,  public virtual ComportementDecorateur
{

private:
//obligate to  hide name ?
    Humain * acteur;
public:
    ComportementHumain(Humain* h);
    ~ComportementHumain();
    void action() override;

};


