/**
 * Fichier acheter.h
 * 
 * implementation du comportement achat pour l'entreprise ou le client humain
 * 
 * 
*/
#pragma once
#include "IComportement.hpp"
#include "Marche.hpp"
#include "vector"
#include "Acheter.hpp"
class Acheter:virtual IComportement
{

   
public:
    Acheter(Entreprise &e);
    ~Acheter();
    void action() override;
};

