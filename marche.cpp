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

Marche Marche::getInstance(){
    if(Marche::instance!=nullptr){
        return Marche::instance;
    }
}
void Marche::setInstance(Entreprise boite, Humain humain){
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
Marche::getListVendeurs(Produits produit)
    {
        for(auto p=this->instance.boitesSurLeMarche.begin();p!=this->instance.boitesSurLeMarche.end();p++){
            if(*p->getProduitFabrication()==produit.getName()){
                //todo add to a list
            }

        }
    }
Marche::getListEntreprise(){
    return this->instance.boitesSurLeMarche;
}
Marche::getListHumain(){
    return this->instance.humainsSurLeMarche;
}
void Marche::Tour()
    {

    }

