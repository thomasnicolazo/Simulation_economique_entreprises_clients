#include <string>
#include <vector>
#include <deque>
#include "Entrepot.hpp"
#include "Produits.hpp"

Entrepot::Entrepot(){}
Entrepot::~Entrepot(){}

// materiaux de construction
void Entrepot::rawProductsPushBack(Produits product){
	vectorProduitBrute.push_back(product);
}

// produits fabriqués par l'entreprise
void Entrepot::madeProductsPushBack(Produits product){
	vectorProduitFini.push_back(product);
}

// not used for the moment

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

/* produits fini de fabriquer qui sont donc disponibles à la vente
regarde dans la liste produitFini si un produit est fini grace à la méthode isDone
*/
std::vector<Produits> Entrepot::getProductsReadyToSell(){
	std::vector<Produits> productsReadyToSell;
	for(int i=0; i<vectorProduitFini.size();i++){
		if(vectorProduitFini[i].isDone()){
			productsReadyToSell.push_back(vectorProduitFini[i]);
		}
	}
	return productsReadyToSell;
}

//  si un produit a été acheté par un client on le supprime de l'inventaire de l'entreprise
void Entrepot::eraseBoughtProduct(std::string name,double price){
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

void Entrepot::updateEntrepot(){ // pour tous les produits de l'entrepot, on update leur avancement de consttruction
	for(int i=0;i<vectorProduitFini.size();i++){
		vectorProduitFini[i].updateFabriqueDepuis();
	}
	for(int i=0;i<vectorProduitBrute.size();i++){
		vectorProduitBrute[i].updateFabriqueDepuis();
	}
}

bool Entrepot::isRawProducts(std::deque<Produits> listeRawProducts){
	/* fonction qui regarde si les materiaux de construction sont disponibles en stock dans l'entrepot.
	Elle prend en argument la liste des matériaux a cherché puis compare leurs disponibilités dans l'inventaire.
	Si ils sont tous disponibles retourne vrai*/
	std::vector<Produits> vectorProduitBruteCopy = vectorProduitBrute;
	int compteurMotTrouve = 0;
	bool estdansLEntrepot = false;
	for(int i =0; i<listeRawProducts.size();i++){
		for(int j=0;j<vectorProduitBruteCopy.size();j++){
			if(vectorProduitBruteCopy[j].getName() == listeRawProducts[i].getName()){
				vectorProduitBruteCopy.erase(vectorProduitBruteCopy.begin()+j);
				compteurMotTrouve++;
				j--;
				break;

			}
		}
	}
	if(compteurMotTrouve == listeRawProducts.size()){
		return true;
	}
	else{
		return false;
	}
}

bool Entrepot::isProductInProduction(){
	bool isInProduction = false;
	for(int i =0; i<vectorProduitFini.size();i++){
		if(vectorProduitFini[i].isDone() == false){
			isInProduction = true;
			break;
		};
	}
	return isInProduction;
}

void Entrepot::displayAllProductsFini(){
	for(int i =0; i<vectorProduitFini.size();i++){
		vectorProduitFini[i].displayProduct();
	}
}
