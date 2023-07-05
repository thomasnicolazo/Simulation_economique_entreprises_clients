/**
 * Fichier ComportementDecorateur.h
 * 
 * Implémentation du décorateur pour les comportements
 * 
 * **/
#include "IComportement.h"
class ComportementDecorateur : virtual IComportement 
{
private:
    /* data */
public:
    ComportementDecorateur(/* args */);
    ~ComportementDecorateur();
};

