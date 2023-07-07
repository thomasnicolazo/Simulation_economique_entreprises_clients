/**
 * fichier Vendre.hpp
 *
 * Définit l'interface pour l'implémentation du comportement vendre
 *
 * **/
#pragma once
#include "IComportement.hpp"
#include "Entreprise.hpp"


class Vendre:virtual IComportement
{
private:
    /* data */
public:
    Vendre(Entreprise &e);
    ~Vendre();
    void action() override;
};

