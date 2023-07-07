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

double Humain::salaireTour()
{
    acompte+=salaire;
}

bool Humain::consommer(Produits bien)
{
    double p=bien.getPrix()   ;
    if(this->acompte-p > 0){
        this->acompte-=p;
        return true;
    }
    return false;

}
