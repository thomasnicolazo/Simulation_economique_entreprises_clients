/***
 * Fichier Marche.hpp
 * 
 * Singleton pour les opration de marchées entre entreprise et entre entreprise et client
 * 
 * 
 * 
*/
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
    Marche();
public:
    ~Marche();
    static Marche getInstance();
    std::vector<Produits> getListProduitsFini();
    std::vector<Produits> getListProduitsBrute();
    std::vector<IActeur> getListAcheteurs();
    std::vector<IActeur> getListVendeurs(Produits p);
    void Tour();
};

