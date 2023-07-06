#include "Acheter.hpp"

Acheter::Acheter()=default;

Acheter::~Acheter()
{
}
void Acheter::action(){
   
    //to do action on acteur
    //test si l'entreprise ne produit pas?
    Marche instance=Marche::getInstance();
    Entreprise acteur=(Entreprise)this->getEntrepriseInstance();
    for(auto p=)
    std::vector<IActeur> vendeurList=instance.getListAllVendeurs();


}
