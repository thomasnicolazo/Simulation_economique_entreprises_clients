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

#include "Produits.hpp"



class Humain 
{
private :
    std::string nom;
    std::string adresse;
    double acompte;
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

    //-----Méthode pour permettre à un humain de consommer------//
    signed int consommer(std::vector<Produits> listeProduitsTermine);

    
};