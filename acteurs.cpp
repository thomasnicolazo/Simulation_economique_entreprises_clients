#include <iostream>
#include <deque>
#include <vector>
#include "acteurs.hpp"
#include "Entrepot.hpp"


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
    return nom;
}
std::string IActeur::getAdresse()
{
    return adresse;
}
int IActeur::getAcompte()
{
    return acompte;
}



int main()
{
    std::cout << "Hello world!" << std::endl;
    return 0;
}
