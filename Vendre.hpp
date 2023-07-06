/**
 * fichier Vendre.hpp
 * 
 * Définit l'interface pour l'implémentation du comportement vendre
 * 
 * **/
#pragma once
#include "IComportement.hpp"


class Vendre:virtual IComportement
{
private:
    /* data */
public:
    Vendre(/* args */);
    ~Vendre();
};

