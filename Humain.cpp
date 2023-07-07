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
    return this->salaire;
}


//------Méthode pour augmenter le compte d'un humain à chaque tour------//
void Humain::salaireTour()
{
    this->acompte+=salaire;
}

//-----Méthode pour permettre à un humain de consommer------//
//Utilise la mthode d'entreprise "vendre" pour supprimer un produit de l'entrepot.
void Humain::consommer(Entreprise boite, ProduitFini bien)
{
    if (acompte>bien.getPrix())
    {
        boite.vendre(bien);
        acompte-=bien.getPrix();
    }
}
