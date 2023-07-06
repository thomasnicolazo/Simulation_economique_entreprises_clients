#include <string>
#include <vector>
#include "Entrepot.hpp"
#include "Produits.hpp"

Entrepot::Entrepot(){}
Entrepot::~Entrepot(){}

void Entrepot::pushBack(Produits product, std::vector<Produits> liste){
	liste.push_back(product);
}


Produits* Entrepot::getProductWithLowerPrice(std::string name, std::vector<Produits> liste){
	Produits* productWithLowestPrice = nullptr;
	for(int i =0; i<liste.size();i++){
		if(productWithLowestPrice == nullptr){
			productWithLowestPrice = &liste[i];
		}
		else if(productWithLowestPrice->getPrix() > liste[i].getPrix() && liste[i].getName() == productWithLowestPrice->getName()){
			productWithLowestPrice = &liste[i];
		}
		
	}
	
	return productWithLowestPrice;
}
