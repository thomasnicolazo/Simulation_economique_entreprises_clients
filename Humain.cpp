#include <iostream>
#include "Humain.hpp"

//-----Méthodes de la classe Humain------//


//------Constructeurs de la classe------//
Humain::Humain(std::string nom_, std::string adresse_, double acompte_, double salaire_) :
    IActeur(nom_,adresse_, acompte_),
    salaire(salaire_)
    {};

//------Destructeur de la classe------//
Humain::~Humain(){};

//------Accesseurs de la classe-------//
double Humain::getSalaire()
{
    return salaire;
}

void Humain::salaireTour()
{
    acompte+=salaire;
}

void Humain::consommer(ProduitFini bien)
{

}
