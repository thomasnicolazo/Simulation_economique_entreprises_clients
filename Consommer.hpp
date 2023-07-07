/**
 * Fichier Consommer.hpp
 *
 * interface pour l'implémentation du comportement Consommer
 *
 * **/
#pragma once
#include "IComportement.hpp"
#include "Humain.hpp"
class Consommer: virtual IComportement
{
private:
//Hiding virtual attribute 
   Humain* acteur;
public:
    Consommer(Humain &h);
    ~Consommer();
    void action() override;
};
