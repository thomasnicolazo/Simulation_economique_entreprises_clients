/**
 * Fichier Consommer.hpp
 * 
 * interface pour l'implémentation du comportement Consommer
 * 
 * **/
#pragma once
#include "IComportement.hpp"
class Consommer: virtual IComportement
{
private:
   
public:
    Consommer(Humain &h);
    ~Consommer();
    void action() override;
};
