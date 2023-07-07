#include "Produire.hpp"



Produire::Produire(Entreprise &e)
{
    this->acteur=&e;
}

Produire::~Produire()
{
}

void Produire::action(){
    Entreprise * entreprise=(Entreprise *)this->acteur;
    //ToDo action on this -> acteur

}
