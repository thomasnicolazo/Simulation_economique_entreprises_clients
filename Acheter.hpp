/**
 * Fichier acheter.h
 * 
 * implemntation du comportement achat pour l'entreprise ou le client humain
 * 
 * 
*/
#include "IComportement.hpp"

class Acheter:virtual IComportement
{

   
public:
    Acheter();
    ~Acheter();
    void action() override;
};

