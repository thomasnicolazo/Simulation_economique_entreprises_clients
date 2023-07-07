#include<string>
#include<iostream>
#include <deque>
#include <vector>
#include "IActeur.hpp"
#include "Entrepot.hpp"
#include "IComportement.hpp"


//-----Méthodes de la classe IActeur------//

//------Constructeur de la classe------//
IActeur::IActeur(std::string nom_, std::string adresse_, double acompte_) :
    nom(nom_),
    adresse(adresse_),
    acompte(acompte_)
    {};
//------Destructeur de la classe------//
IActeur::~IActeur(){};

//------Accesseurs de la classe------//
std::string IActeur::getNom()
{
    return this->nom;
}
std::string IActeur::getAdresse()
{
    return this->adresse;
}
int IActeur::getAcompte()
{
    return this->acompte;
}
