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
#include "IComportement.h"

class Produire : IComportement
{

public:
    Produire();
    ~Produire();
    void action() override;
};

