#include "Consommer.hpp"



Consommer::Consommer(Humain &h){

    this->acteur=&h;

};

Consommer::~Consommer()=default;

void Consommer::action(){
     if(this->acteur->getAcompte()>0){
        this->acteur->achete();
    };
}
