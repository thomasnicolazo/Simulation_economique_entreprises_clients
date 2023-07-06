/***
 * fichier Produire.h
 * 
 * 
 * Interface pour l'implémentation du comportement Produire
 * 
 * 
 * 
 * 
*/
#include "IComportement.hpp"

class Produire : IComportement
{

public:
    Produire();
    ~Produire();
    void action() override;
};

