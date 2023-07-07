#ifndef ENTREPOT_HPP_INCLUDED
#define ENRTEPOT_HPP_INCLUDED
#include <string>
#include <vector>
#include <deque>
#include "Produits.hpp"

class Entrepot
{
private:
	std::vector<Produits> vectorProduitBrute; // materiaux de construction
	std::vector<Produits> vectorProduitFini; // produits fabriqués par l'entreprise
public:
	Entrepot();
	~Entrepot();
	void rawProductsPushBack(Produits product); // ajoute un produit dans la liste des matériaux de construction
	void madeProductsPushBack(Produits product); // ajoute un produit dans la liste des produit à fabriquer
	Produits* getProductWithLowerPrice(std::string name, std::vector<Produits> liste);
	std::vector<Produits> getProductsReadyToSell(); // produits fini de fabriquer qui sont donc disponibles à la vente
	void eraseBoughtProduct(std::string name,double price);
	void updateEntrepot(); // chaque tour avance le compteur de construction/fabrication des produits dans l'entrepot
	bool isRawProducts(std::deque<Produits> listeRawProducts); // est ce que l'entreprise à les matériaux de construction nécessaire dans son entrepot pour fabriquer un nouveau produit
	bool isProductInProduction(); // est ce que l'entreprise a des prouit en cours de fabrication
	void displayAllProductsFini(); // display all
};

#endif