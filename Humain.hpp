#ifndef HUMAIN_HPP_INCLUDED
#define HUMAIN_HPP_INCLUDED
/***
 * Fichier Humain.hpp
 *
 *  interface pour l'implémentationn des clients
 *
 *
 *
 *
*/
#include "IActeur.hpp"
#include "Produits.hpp"


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





#endif // HUMAIN_HPP_INCLUDED
