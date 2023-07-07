#pragma once
#include <iostream>
#include <string>

class Produits
{
protected:
	double prix;
	std::string name;
	int dureeFabrication; // temps nécéssaire à la fabrication du produit
	int fabriqueDepuis; // temps depuis le commencent de la favrication (commence à 0)
	bool estFabrique; // vrai: si le produit est fini d'étre fait; faux sinon
	std::string nameEntreprise; // nom de l'entreprise qui a fabriqué le produit

public:
	Produits(std::string nom, int dureeF,std::string nomEntreprise);

	~Produits();

	void setPrix(double price); // defini le porix d'un  produit

	double getPrix();

	void setDureedeFabrication (int dureeF); // methode bonus  si on veut changer le temps de fabrication d'un produit specifique(Ex: le niveau de la R&D augmente)

	int getDureeDeFabrication(); // methode qui renvoie la durée de fabrication

	void updateFabriqueDepuis();// à chaque fin de tour cette methode est appelé pour tout les produits pour incrémenter la variable fabriqué depuis.

	std::string getName();

	bool isDone(); // le prroduit est fini si isDone est true; sinon false

	std::string getEntrepriseName(); // return the name of the company which made the product

	void displayProduct(); // affiche le nom puis le prix

};

class ProduitBrute: public Produits // composants de fabrication
{
public:
	ProduitBrute(std::string _nom,int _dureeF, std::string _nomEntreprise);// : Produits( _nom, _dureeF);

	~ProduitBrute();
};

class ProduitFini : public Produits// produits avec valeurs ajoutées
{
private:
	int qualite;
public:
	ProduitFini(std::string _nom,int _dureeF, int quality,std::string _nomEntreprise); // : Produits( _nom, _dureeF);

	~ProduitFini();

	int getQualite(); // not used; bonus un meme produit mais plusieurs qualités

	bool isDone(); // redfinition pas utilisé
};
