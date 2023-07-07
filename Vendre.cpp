#include"Vendre.hpp"

Vendre::Vendre(Entreprise &e)
{
    this->acteur=&e;
}

Vendre::~Vendre()
{
}

void Vendre::action(){
    Entreprise* entreprise=(Entreprise*)this->acteur;
    //do the stuff
}