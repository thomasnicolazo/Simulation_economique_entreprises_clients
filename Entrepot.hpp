#ifndef ENTREPOT_HPP_INCLUDED
#define ENRTEPOT_HPP_INCLUDED
#include <string>
#include <vector>
#include "Produits.hpp"

class Entrepot
{
private:
	std::vector<Produits> vectorProduitBrute;
	std::vector<Produits> vectorProduitFini;
public:
	Entrepot();
	~Entrepot();
	void rawProductsPushBack(Produits product);
	void madeProductsPushBack(Produits product);
	Produits* getProductWithLowerPrice(std::string name, std::vector<Produits> liste);
	std::vector<Produits> getProductsReadyToSell();
};

#endif