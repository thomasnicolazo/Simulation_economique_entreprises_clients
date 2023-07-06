#include "Marche.hpp"



//Transformer en signleton.
//A retrouver depuis IActeur.
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
Marche::void Tour()
    {

    }
};

