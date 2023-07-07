/**
* Fichier IActeur.hpp
*
* Définissant l'interface pour les acteurs..
*
*/
#pragma once
#include "IComportement.hpp"
#include<string>

class IActeur
{

protected :

    std::string nom;
    std::string adresse;
    double acompte;
    IComportement comportements;

public:
    //------Constructeurs de la classe------//
    IActeur(std::string nom_, std::string adresse_, double acompte_);
    //------Destructeur de la classe------//
    ~IActeur();
    //------Accesseurs de la classe------//
    std::string getNom();
    std::string getAdresse();
    int getAcompte();
    void achete();

};



