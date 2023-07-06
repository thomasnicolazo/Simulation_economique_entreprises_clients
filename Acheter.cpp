#include "Acheter.hpp"


Acheter::Acheter()=default;

Acheter::~Acheter()
{
}
void Acheter::action(){
    if(this->acteur.getAcompte()>0){
        this->acteur.achete();
    };
    //to do action on acteur

}
