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
		if(vectorProduitFini[i].isDone()){
			productsReadyToSell.push_back(vectorProduitFini[i]);
		}
	}
	return productsReadyToSell;
}

void Entrepot::productHasBeenBought(std::string name,double price){
	int confirmation =0;
	for(int i=0; i<vectorProduitFini.size();i++){
		if(vectorProduitFini[i].isDone()){
			if(vectorProduitFini[i].getPrix() == price && vectorProduitFini[i].getName() == name){
				vectorProduitFini.erase(vectorProduitFini.begin()+i);
				confirmation=1;
				break;
			}
		}
	}
	if(confirmation == 0){
		std::cout <<"objet non detruit dans entrepot" <<std::endl;
	}
}

void Entrepot::updateEntrepot(){
	for(int i=0;i<vectorProduitFini.size();i++){
		vectorProduitFini[i].updateFabriqueDepuis();
	}
	for(int i=0;i<vectorProduitBrute.size();i++){
		vectorProduitBrute[i].updateFabriqueDepuis();
	}
}