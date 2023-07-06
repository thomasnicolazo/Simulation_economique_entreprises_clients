#include <iostream>
#include <deque>
#include "acteurs.hpp"


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
//-----Méthodes de la classe Entreprise------//

//------Constructeurs de la classe------//
Entreprise::Entreprise(std::string nom_, std::string adresse_, double acompte_,\
            int nbrEmploye_, double revenuTour_, double depenseTour_,\
            std::deque<Produits> productionTour_, rechercheEtDev r_d_, ProduitFini produitFabrication_) :
    IActeur::IActeur(nom_,adresse_, acompte_), nbrEmploye(nbrEmploye_),
    revenuTour(revenuTour_), depenseTour(depenseTour_),
    productionTour(productionTour_), r_d(r_d_), produitFabrication(produitFabrication_)
    {};

//-------Destructeur de la classe------//
    Entreprise::~Entreprise(){};

//------Accesseurs de la classe------//
int Entreprise::getNbrEmploye()
{
    return nbrEmploye;
}
double Entreprise::getRevenuTour()
{
    return revenuTour;
}
double Entreprise::getDepenseTour()
{
    return depenseTour;
}
rechercheEtDev Entreprise::getR_D()
{
    return r_d;
}
ProduitFini Entreprise::getProduitFabrication()
{
    return produitFabrication;
}




std::deque<Produits> Entreprise::getProductionTour()
{
        return productionTour;
}

std::deque<Produits> Entreprise::produire()
{

}

void Entreprise::commande(Produits produit, Entreprise boite)
{

}

void Entreprise::vendre()
{

}

void Entreprise::rapportDetailTour()
{

}


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

void Humain::consommer(ProduitFini bien)
{

}


int main()
{
    std::cout << "Hello world!" << std::endl;
    return 0;
}
