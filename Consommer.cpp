#include "Consommer.hpp"



Consommer::Consommer(Humain &h){

    this->acteur=&h;

};

Consommer::~Consommer()=default;

void Consommer::action(){
    
    Marche* instance=Marche::getInstance(); 
    if(this->acteur->getAcompte()>0){
        //look in marche for top quality product
        std::vector<Produits> tmp =instance->getListProduitsFini();
        if(((Humain*)this->acteur)->consommer((Produits)tmp.at(0))){
            //todo call Entreprise vendre 
        }
    };
}
