#ifndef ACTEURS_HPP_INCLUDED
#define ACTEURS_HPP_INCLUDED

#include <iostream>
#include "Produits.hpp"

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
    std::deque<Produits> productionTour;
    rechercheEtDev r_d;
    ProduitFini produitFabrication;


public:
    //------Constructeurs de la classe------//
    Entreprise(std::string nom_, std::string adresse_, double acompte_,\
               int nbrEmploye_, double revenuTour_, double depenseTour_,\
               std::deque<Produits> productionTour_, rechercheEtDev r_d_, ProduitFini produitFabrication_);
    //-------Destructeur de la classe------//
    ~Entreprise();
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
