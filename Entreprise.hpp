/***
 *  Fichier Entreprise.hpp
 *  
 * 
 * 
*/
#include <deque>
#include <IActeur.hpp>
#include "Produits.hpp"

enum rechercheEtDev{
    OUI, NON};
    
class Entreprise : public IActeur
{
protected :
    std::string nomContact;
    int nbrEmploye;
    double revenuTour;
    double depenseTour;
    std::deque<Produits> productionTour;
    rechercheEtDev r_d;
    ProduitFini produitFabrication;


public:
    //------Constructeurs de la classe------//
    Entreprise(std::string nom_, std::string adresse_, double acompte_,\
               int nbrEmploye_, double revenuTour_, double depenseTour_,\
               std::deque<Produits> productionTour_, rechercheEtDev r_d_, ProduitFini produitFabrication_);
    //-------Destructeur de la classe------//
    ~Entreprise(){};
    //------Accesseurs de la classe------//
    int getNbrEmploye();
    double getRevenuTour();
    double getDepenseTour();
    rechercheEtDev getR_D();
    ProduitFini getProduitFabrication();




    std::deque<Produits> getProductionTour();

    std::deque<Produits> produire();

    void commande(Produits produit, Entreprise boite);

    void vendre();

    void rapportDetailTour();


};