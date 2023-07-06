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
	void pushBack(Produits product, std::vector<Produits> liste);
	Produits* getProductWithLowerPrice(std::string name, std::vector<Produits> liste);
};

#endif