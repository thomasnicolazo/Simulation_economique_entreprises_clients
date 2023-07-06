#include <iostream>
#include <string>
#include "Produits.hpp"

// class Produits
	
Produits::Produits(std::string nom,int dureeF){
	dureeFabrication = dureeF;
	fabriqueDepuis = 0;
	estFabrique = false;
	name = nom;
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

void Produits::updateFabriqueDepuis(){
	fabriqueDepuis++;
	if(fabriqueDepuis == dureeFabrication){
		estFabrique = true;
	}
}

std::string Produits::getName(){
	return name;
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
	qualite = quality;
}

ProduitFini::~ProduitFini(){}

int ProduitFini::getQualite(){
		return qualite;
}

