#include "Acheter.hpp"

Acheter::Acheter()=default;

Acheter::~Acheter()
{
}
void Acheter::action(){
   
    //to do action on acteur
    Marche instance=Marche::getInstance();
    std::vector<IActeur> list=instance.getListVendeurs();

}
