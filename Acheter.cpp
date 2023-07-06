#include "Acheter.hpp"

Acheter::Acheter(Entreprise &e ){
    this->acteur=&e;

}

Acheter::~Acheter()
{
}
void Acheter::action(){
   
    //to do action on acteur
    //test si l'entreprise ne produit pas?
    Marche instance=Marche::getInstance();
    Entreprise * entr=(Entreprise*)this->acteur;


}
