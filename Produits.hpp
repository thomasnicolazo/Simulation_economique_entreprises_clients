#pragma once
#include <iostream>
#include <string>

class Produits
{
protected:
	double prix;
	std::string name;
	int dureeFabrication;
	int fabriqueDepuis;
	bool estFabrique;

public:
	Produits(std::string nom, int dureeF);

	~Produits();

	void setPrix(double price);

	double getPrix();

	void setDureedeFabrication (int dureeF);

	int getDureeDeFabrication();

	void updateFabriqueDepuis();

	std::string getName();

	bool isDone();

};

class ProduitBrute: public Produits // composants de fabrication
{
public:
	ProduitBrute(std::string _nom,int _dureeF);// : Produits( _nom, _dureeF);

	~ProduitBrute();
};

class ProduitFini : public Produits// produits avec valeurs ajoutées
{
private:
	int qualite;
public:
	ProduitFini(std::string _nom,int _dureeF, int quality); // : Produits( _nom, _dureeF);

	~ProduitFini();

	int getQualite();

	bool isDone();
};

