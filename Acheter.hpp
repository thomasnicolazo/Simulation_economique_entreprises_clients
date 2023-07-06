/**
 * Fichier acheter.h
 * 
 * implementation du comportement achat pour l'entreprise ou le client humain
 * 
 * 
*/
#pragma once
#include "IComportement.hpp"

class Acheter:virtual IComportement
{

   
public:
    Acheter();
    ~Acheter();
    void action() override;
};

