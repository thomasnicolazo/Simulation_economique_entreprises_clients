/**
 * Fichier Marche.hpp
 * 
 *  Définis le comportement des marchés
 * 
 *  singleton
 * 
 * 
*/

#include "Marche.hpp"

Marche::getInstance(){
    if(Marche::instance!=nullptr){
        retunr Marche::instance
    }
}
Marche::setInstance(Entreprise boite, Humain humain){
    if(Marche::instance == nullptr){
        Marche::instance=new Marche(Entreprise boite, Humain humain);
    }
    else{
        Marche::instance.humainsSurLeMarche.push_back(humain);
        Marche::instance.boitesSurLeMarche.push_back(boite);
    }
}



Marche::Marche(Entreprise boite, Humain humain)
    {
        boitesSurLeMarche.push_back(boite);
        humainsSurLeMarche.push_back(humain);
    }

Marche::~Marche()
    {
    std::cout << "Un marché a été détruit." << std::endl;
    }

Marche::getListProduitsFini()
    {

    }
Marche::getListProduitsBrute()
    {

    }
Marche::getListAcheteurs()
    {

    }
Marche::getListVendeurs(Produit p)
    {

    }
void Marche::Tour()
    {

    }

