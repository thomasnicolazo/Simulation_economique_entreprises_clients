/***
 * Fichier Humain.hpp
 *
 *  interface pour l'implémentationn des clients
 *
 *
 *
 *
*/
#pragma once
#include "IActeur.hpp"
#include "Produits.hpp"
#include "Entreprise.hpp"

class IActeur;
class Humain :public virtual  IActeur
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

    //------Méthode pour augmenter le compte d'un humain à chaque tour------//
    void salaireTour();

    bool consommer(Produits bien);

    //-----Méthode pour permettre à un humain de consommer------//
    //Utilise la mthode d'entreprise "vendre" pour supprimer un produit de l'entrepot.
    void consommer(Entreprise boite, ProduitFini bien);
};
