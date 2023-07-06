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
//-----Méthodes de la classe Entreprise------//

//------Constructeurs de la classe------//
Entreprise::Entreprise(std::string nom_, std::string adresse_, double acompte_,\
            int nbrEmploye_, double revenuTour_, double depenseTour_,\
            Entrepot entrepot_, std::deque<Produits> productionTour_,\
            rechercheEtDev r_d_, ProduitFini produitFabrication_) :
    IActeur::IActeur(nom_,adresse_, acompte_), nbrEmploye(nbrEmploye_),
    revenuTour(revenuTour_), depenseTour(depenseTour_),
    entrepotEntreprise(entrepot_), productionTour(productionTour_),
    r_d(r_d_), produitFabrication(produitFabrication_)
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
Entrepot Entreprise::getEntrepot()
{
    return entrepotEntreprise;
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

//-----Méthode pour obtenir les produits bruts présents dans l'entrepôts-------//
std::vector<Produits> getProduitsBruts()
{
    return Entreprise::entrepotEntreprise.vectorProduitBrute;
}
//-----Méthode pour obtenir les produits finis présents dans l'entrepôts-------//
std::vector<Produits> getProduitsAVendre()
{
    return Entreprise::entrepotEntreprise.vectorProduitFini;
}

//------Méthode utile de la classe------//

std::deque<Produits> Entreprise::produire()
{
    std::vector<ProduitBrute> produitsBrutsEnStock=boite.getProduitBrut();
    std::deque<Produits> produitAUtiliser = Entreprise::getProductionTour();

    for(int i=0; i<produitAUtiliser.size();i++)
    {
        if(produitAUtiliser[i].getName() == produit.name)
        {

        }

}

void Entreprise::commande(Produits produit, Entreprise::Entreprise boite)
{
    std::vector<ProduitFini> produitsAVendre=boite.getProduitAVendre();

    for(int i=0; i<produitsAVendre.size();i++)
    {
        if(produitsAVendre[i].getName() == produit.name)
        {
            boite.vendre(produit);
            break;
        }
    }

}

void Entreprise::vendre(Produits produit)
{
    //On vérifie si le produit est présent dans l'entrepôt.
    bool estPresent=false;
    int indiceDuProduit=0;
    std::vector<ProduitFini> produitsAVendre=Entreprise::getProduitAVendre();
    for(int i=0; i<produitsAVendre.size();i++)
    {
        if(produitsAVendre[i].getName() == produit.name)
        {
            estPresent=true;
            indiceDuProduit=i;
            break;
        }
    }

    if(estPresent)
    {
        acompte+=produitsAVendre[i].getPrix();
        //ENLEVER PRODUIT DE L'ENTREPOT.
    }

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

void Humain::salaireTour()
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
