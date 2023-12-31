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

Marche* Marche::getInstance(){
    if(Marche::instance!=nullptr){
        return Marche::instance;
    }
}

void Marche::setInstance(Entreprise boite, Humain humain){
    if(Marche::instance == nullptr){
        Marche::instance=new Marche(boite,humain);
    }
    else{
        Marche::instance->humainsSurLeMarche.push_back(humain);
        Marche::instance->boitesSurLeMarche.push_back(boite);
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

std::vector<Produits> Marche::getListProduitsFini()
{
    std::vector<Produits> results;
    auto entreprises=this->boitesSurLeMarche;
    for(auto p=entreprises.begin();p!=entreprises.end();p++){

            std::vector<Produits> tmp=p->getEntrepot().getProductsReadyToSell();
            results.insert(results.end(), tmp.begin(), tmp.end());
    }
    return results;


 }

std::vector<Produits>Marche::getListProduitsBrute()
{
 //useless

}
std::vector<IActeur>Marche::getListAcheteurs()
{
    //useless ?
}
std::vector<IActeur>Marche::getListVendeurs(Produits produit)
    {
        for(auto p=this->instance->boitesSurLeMarche.begin();p!=this->instance->boitesSurLeMarche.end();p++){
            if(p->getProduitFabrication().getName()==produit.getName()){
                //todo add to a list
            }

        }
    }
std::deque<Entreprise>Marche::getListEntreprise(){
    return this->instance->boitesSurLeMarche;
}
std::deque<Humain>Marche::getListHumain(){
    return this->instance->humainsSurLeMarche;
}
void Marche::Tour()
{
    /**
     * Point d'entrée de la simulation
     * chaque tour les actions sont réalisés d'abord par les humain puis par les entreprises
    */
        for(auto p=this->humainsSurLeMarche.begin();p!=this->humainsSurLeMarche.end();p++){
            (*p).comportements.action();

        }
         for(auto p=this->boitesSurLeMarche.begin();p!=this->boitesSurLeMarche.end();p++){
            (*p).comportements.action();

        }
}

