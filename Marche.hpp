/***
 * Fichier Marche.hpp
 *
 * Singleton pour les opration de marchées entre entreprise et entre entreprise et client
 *
 *
 *
*/
#pragma once
#include<deque>
#include<stdlib.h>
#include "Entreprise.hpp"
#include "Humain.hpp"
#include <vector>

class Marche
{
private:
    static Marche instance;
    std::deque<Entreprise> boitesSurLeMarche;
    std::deque<Humain> humainsSurLeMarche;
private:
    Marche(Entreprise boite, Humain humain);
public:
    ~Marche();
    static Marche getInstance();
    static Marche setInstance(Entreprise boite, Humain humain);
    std::vector<Produits> getListProduitsFini();
    std::vector<Produits> getListProduitsBrute();
    std::vector<IActeur> getListAcheteurs();
    std::vector<IActeur> getListVendeurs(Produits p);
    std::vector<Entreprise> getListEntreprise();
    std::vector<Humain> getListHumain();
    void Tour();
};
