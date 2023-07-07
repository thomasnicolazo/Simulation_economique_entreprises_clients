#include <iostream>
#include <string>
#include "Produits.hpp"

// class Produits
	
Produits::Produits(std::string nom,int dureeF){ //constructeur  Produits
	dureeFabrication = dureeF;	//inittialise le temps de fabrication total du produit, futur developpement un meme type produit pourra avoir different temps de fabrication dû àddes problèmes.
	fabriqueDepuis = 0; // durée depuis laquelle l'objet est en construction
	estFabrique = false; // l'objet est il fini de construire
	name = nom; // nom du produit // type de produit (Ex:pile)
}

Produits::~Produits(){}

void Produits::setPrix(double price){
		prix = price;
}

double Produits::getPrix(){
	return prix;
}

void Produits::setDureedeFabrication (int dureeF){
	dureeFabrication = dureeF;
}

int Produits::getDureeDeFabrication(){
	return dureeFabrication;
}

void Produits::updateFabriqueDepuis(){ //à chaque fin de tour ou début de tour on appelle cette fonction pour incrémenter la progression de la construction de tout les produits 
	fabriqueDepuis++;
	if(fabriqueDepuis >= dureeFabrication){
		estFabrique = true;
	}
}

std::string Produits::getName(){
	return name;
}

bool Produits::isDone(){
	return estFabrique;
}

void Produits::displayProduct(){
	std::cout << "name :" << name << " prix : " << prix << std::endl;
}

	


// class ProduitBrute

ProduitBrute::ProduitBrute(std::string _nom,int _dureeF) : Produits::Produits( _nom, _dureeF)
{
	dureeFabrication = _dureeF;
	fabriqueDepuis = 0;
	estFabrique = false;
	name = _nom;
}
	
ProduitBrute::~ProduitBrute(){}


// class ProduitFini

ProduitFini::ProduitFini(std::string _nom,int _dureeF, int quality) : Produits::Produits( _nom, _dureeF)
{
	dureeFabrication = _dureeF;
	fabriqueDepuis = 0;
	estFabrique = false;
	name = _nom;
	qualite = quality; // pas utilisé/implémenté pour le moment, un meme type de produit pourra avoir differentes qualités (peut etre un prix qui varira en fonction de cette qualité aussi)
}

ProduitFini::~ProduitFini(){}

int ProduitFini::getQualite(){
		return qualite;
}

bool ProduitFini::isDone(){
	return estFabrique;
}

