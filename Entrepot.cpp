#include <string>
#include <vector>
#include "Entrepot.hpp"
#include "Produits.hpp"

Entrepot::Entrepot(){}
Entrepot::~Entrepot(){}

void Entrepot::rawProductsPushBack(Produits product){
	vectorProduitBrute.push_back(product);
}

void Entrepot::madeProductsPushBack(Produits product){
	vectorProduitFini.push_back(product);
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

std::vector<Produits> Entrepot::getProductsReadyToSell(){
	std::vector<Produits> productsReadyToSell;
	for(int i=0; i<vectorProduitFini.size();i++){
		if(vectorProduitFini[i].estFabrique){
			productsReadyToSell.push_back(vectorProduitFini);
		}
	}
	return productsReadyToSell;
}
