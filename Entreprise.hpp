#ifndef ENTREPRISE_HPP_INCLUDED
#define ENTREPRISE_HPP_INCLUDED
/***
 *  Fichier Entreprise.hpp
 *
 *
 *
*/
#include <deque>
#include "IActeur.hpp"
#include "Produits.hpp"
#include "Entrepot.hpp"

enum rechercheEtDev {OUI, NON};

class Entreprise : public virtual IActeur
{
protected :
    std::string nomContact;
    int nbrEmploye;
    double revenuTour;
    double depenseTour;
    Entrepot entrepotEntreprise;
    std::deque<Produits> productionTour;
    rechercheEtDev r_d;
    ProduitFini produitFabrication;

    //Attributs pour le rapport détaillé du tour.
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

    //-----Méthode de début de tour-----//
    void attributsTourZero();

    std::deque<Produits> produire(Entrepot entrepotEntreprise);

    void commande(Produits produit, Entreprise boite);

    void vendre(Produits produit);

    void rapportDetailTour();


};


#endif // ENTREPRISE_HPP_INCLUDED
