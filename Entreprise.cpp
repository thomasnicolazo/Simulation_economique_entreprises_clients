#include <iostream>
#include <string>
#include "Entrepot.hpp"
#include "Entreprise.hpp"
#include "Produits.hpp"


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
    return Entreprise::nbrEmploye;
}
double Entreprise::getRevenuTour()
{
    return Entreprise::revenuTour;
}
double Entreprise::getDepenseTour()
{
    return Entreprise::depenseTour;
}
Entrepot Entreprise::getEntrepot()
{
    return Entreprise::entrepotEntreprise;
}
rechercheEtDev Entreprise::getR_D()
{
    return Entreprise::r_d;
}
ProduitFini Entreprise::getProduitFabrication()
{
    return produitFabrication;
}
std::deque<Produits> Entreprise::getProductionTour()
{
        return Entreprise::productionTour;
}
std::deque<Produits> getProduitsAchetesTour()
{
    return Entreprise::produitsAchetesTour;
}
std::deque<Produits> getProduitsVendusTour()
{
    return Entreprise::produitsVendusTour;
}

//-----Méthode pour obtenir les produits finis présents dans l'entrepôts-------//
std::vector<Produits> getProduitsAVendre()
{
    return Entreprise::entrepotEntreprise.getProductsReadyToSell();
}




//------Méthode de production de l'entreprise------//
std::deque<Produits> Entreprise::produire()
{
    //Si les produits nécessaire à la produciton sont dans l'entrepôt...
    if(entrepotEntreprise.isRawProducts(productionTour))
    {
        //On instancie un nouveau produit du type de celui que fabrique l'entreprise...
        ProduitFini nouvProduit(produitFabrication.getName(),\
                                produitFabrication.getDureeDeFabrication(),produitFabrication.getQualite());
        //Et on le mets dans l'entrepôt.
        entrepotEntreprise.madeProductsPushBack(nouvProduit);
    }
    //De plus, on augmente le cycle de production de chaque produit en production.
    entrepotEntreprise.updateEntrepot();
}

//------Méthode d'achat/commande de l'entreprise------//
//Permet d'acheter un produit auprès d'une autre entreprise
void Entreprise::commande(Produits produit, Entreprise::Entreprise boite)
{
    //On cherche si le produit à acheter est bien dans l'entrepot de l'autre entreprise.
    Entrepot entrepotAutreBoite=boite.getEntrepot();
    std::vector<ProduitFini> produitsAVendre=entrepotAutreBoite.getProductsReadyToSell();
    for(int i=0; i<produitsAVendre.size();i++)
    {
        if(produitsAVendre[i].getName() == produit.name)//Si il est présent...
        {
            boite.vendre(produit);//l'autre entreprise le vend...
            entrepotEntreprise.rawProductsPushBack(produit);//et on le met dans l'entrepôt de l'entreprise présente.
            Entreprise::produitsAchetesTour.push_back(produit);
            acompte-=produit.getPrix();//On diminue le compte de l'entreprise du prix du produit acheté.
            depenseTour-=produit.getPrix();
            break;
        }
    }

}

//-----Méthode de début de tour-----//
//Réinitialise les attributs qui varient pendant le tour.
void attributsTourZero()
{
    Entreprise::revenuTour=0;
    Entreprise::depenseTour=0;
    Entreprise::produitsAchetesTour.clear();
    Entreprise::produitsVendusTour.clear();
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

    if(estPresent)//Si le produit est présent, on ajoute son prix au compte de l'entreprise
    {               //et on le supprime de l'entrepôt.
        acompte+=produitsAVendre[i].getPrix();
        revenuTour+=produitsAVendre[i].getPrix();
        entrepotEntreprise.eraseBoughtProduct(produit.getName(), produit.getPrix());
        Entreprise::produitsVendusTour.push_back(produit);
    }

}


void Entreprise::rapportDetailTour()
{
    std::cout << "###---Rapport détaillé de l'entreprise " << Entreprise::getNom()<< "---###"<<std::endl;
    std::cout << "Dépenses du tour : " << Entreprise::getDepenseTour() << std::endl;
    std::cout << "Revenus du tour : " << Entreprise::getRevenuTour() << std::endl;
    std::cout << "Liquidités actuelles : " << Entreprise::getAcompte() << std::endl;
    std::cout << "Produits achetés : ";
    for(int i=0;i< Entreprise::produitsAchetesTour.size();i++)
    {
        Entreprise::getProduitsAchetesTour()[i].displayProduct();
    }
    std::cout << "Produits vendus : ";
    for(int i=0;i< Entreprise::produitsAchetesTour.size();i++)
    {
        Entreprise::getProduitsVendusTour()[i].displayProduct();
    }
    std::cout << "###---Fin du rapport de l'entreprise " << Entreprise::getNom()<< "---###"<<std::endl;
}