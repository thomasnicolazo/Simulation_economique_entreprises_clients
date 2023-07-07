/***
 *  Fichier Entreprise.hpp
 *
 *
 *
*/
#pragma once
#include <deque>
#include "IActeur.hpp"
#include "Produits.hpp"
#include "Entrepot.hpp"

enum rechercheEtDev {OUI, NON};


class IActeur;
class Entreprise :  public virtual IActeur
{
protected :
    std::string nomContact;
    int nbrEmploye;
    Entrepot entrepotEntreprise;
    std::deque<Produits> productionTour;//éléments consommés par l'entreprise pour produire.
    rechercheEtDev r_d;
    ProduitFini produitFabrication;//Produit fabriqué par l'entreprise.

    //Attributs pour le rapport détaillé du tour.
    double revenuTour;
    double depenseTour;
    std::deque<Produits> produitsAchetesTour;
    std::deque<Produits> produitsVendusTour;


public:
    //------Constructeurs de la classe------//
    Entreprise(std::string nom_, std::string adresse_, double acompte_,\
                int nbrEmploye_, double revenuTour_, double depenseTour_,\
                Entrepot entrepot_, std::deque<Produits> productionTour_,\
                rechercheEtDev r_d_, ProduitFini produitFabrication_);
    //-------Destructeur de la classe------//
    ~Entreprise();
    //------Accesseurs de la classe------//
    int getNbrEmploye();
    double getRevenuTour();
    double getDepenseTour();
    Entrepot getEntrepot();
    rechercheEtDev getR_D();
    std::deque<Produits> getProductionTour();
    ProduitFini getProduitFabrication();
    std::deque<Produits> getProduitsAchetesTour();
    std::deque<Produits> getProduitsVendusTour();

    //-----Méthode pour obtenir les produits finis présents dans l'entrepôts-------//
    std::vector<Produits> getProduitsAVendre();

    //-----Méthode de début de tour : réinitialise les attributs modifiés pendant le tour-----//
    void attributsTourZero();

    //------Méthode de production de l'entreprise------//
    //Permet de générer un exemplaire du produit de l'entreprise pendant le tour.
    std::deque<Produits> produire();

    //------Méthode d'achat/commande de l'entreprise------//
    //Permet d'acheter un produit auprès d'une autre entreprise
    void commande(Produits produit, Entreprise boite);

    //------Méthode de vente------//
    //Permet de supprimer un produit de l'entreprise et d'augmenter le compte de l'entreprise de son prix.
    void vendre(Produits produit);

    //------Méthode de rapport------//
    //Affiche les attributs de l'entreprise modifiés pendant le tour.
    void rapportDetailTour();


};
