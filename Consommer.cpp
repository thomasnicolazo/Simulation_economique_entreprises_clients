#include "Consommer.hpp"



Consommer::Consommer()=default;

Consommer::~Consommer()=default;

void Consommer::action(){
     if(this->acteur.getAcompte()>0){
        this->acteur.achete();
    };
}
