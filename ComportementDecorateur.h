/**
 * Fichier ComportementDecorateur.h
 * 
 * Implémentation du décorateur pour les comportements
 * 
 * **/
#include "IComportement.h"
#include "vector"

class ComportementDecorateur : virtual IComportement 
{
private:
    std::vector<IComportement> comportements;
public:
    ComportementDecorateur();
    ~ComportementDecorateur();
};

