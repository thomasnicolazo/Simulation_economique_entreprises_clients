/***
 * fichier Produire.hpp
 *
 *
 * Interface pour l'implémentation du comportement Produire
 *
 *
 *
 *
*/
#pragma once
#include "IComportement.hpp"
#include "Entreprise.hpp"

class Produire : IComportement
{

public:
    Produire(Entreprise &e);
    ~Produire();
    void action() override;
};

