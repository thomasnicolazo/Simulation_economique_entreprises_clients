#include <string>

class Entrepot:
{
private:
	std::vector<Produit> vectorProduitBrute;
	std::vector<Produit> vectorProduitFini;
Public:
	Entrepot();
	~Entrepot();
	void pushBack(Produits product);
	void getProductWithLowerPrice(std::string name);
};
