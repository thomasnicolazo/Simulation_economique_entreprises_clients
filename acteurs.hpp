#ifndef ACTEURS_HPP_INCLUDED
#define ACTEURS_HPP_INCLUDED

#include <iostream>
#include "Produits.hpp"
#include "Entrepot.hpp"

//-----Interface des entreprises et des humains------//
class IActeur
{
protected :

    std::string nom;
    std::string adresse;
    double acompte;
    //Comportement:IComportement

public:
    //------Constructeurs de la classe------//
    IActeur(std::string nom_, std::string adresse_, double acompte_);
    //------Destructeur de la classe------//
    virtual ~IActeur();
    //------Accesseurs de la classe------//
    std::string getNom();
    std::string getAdresse();
    int getAcompte();

};

enum rechercheEtDev {OUI, NON};

class Entreprise : public IActeur
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
    ProduitFini getProduitFabrication();

    //-----Méthode pour obtenir les produits bruts présents dans l'entrepôts-------//
    std::vector<Produits> getProduitsBruts();
    //-----Méthode pour obtenir les produits finis présents dans l'entrepôts-------//
    std::vector<Produits> getProduitsAVecndre();


    std::deque<Produits> getProductionTour();

    std::deque<Produits> produire(Entrepot entrepotEntreprise);

    void commande(Produits produit, Entreprise boite);

    void vendre(Produits produit);

    void rapportDetailTour();


};

class Humain : public IActeur
{
private :
    double salaire;

public :
    //------Constructeurs de la classe------//
    Humain(std::string nom_, std::string adresse_, double acompte_, double salaire_);
    //------Destructeur de la classe------//
    ~Humain();
    //------Accesseurs de la classe-------//
    double getSalaire();



    void salaireTour();

    void consommer(ProduitFini bien);
};


#endif // ACTEURS_HPP_INCLUDED
