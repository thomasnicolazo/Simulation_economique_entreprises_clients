#include "ComportementEntreprise.hpp"

ComportementEntreprise::ComportementEntreprise(Entreprise &entreprise){

    this->acteur=(Entreprise*)&entreprise;


};
ComportementEntreprise::~ComportementEntreprise()=default;

Entreprise* ComportementEntreprise::LookForEntrepriseInstance(){
    /**
     * Useless method (in case of)
     * 
    */
    Marche* marche=Marche::getInstance();
    std::deque<Entreprise> l=marche->getListEntreprise();
    for(auto p=l.begin();p!=l.end();p++){
        if((*p).getNom()==this->acteur->getNom()){
            return (Entreprise*) &(*p);
        }
    }
}

void ComportementEntreprise::action(){
    /**
     * une entreprise achete si elle ne produit plus
     * Une entreprise produit tant qu'elle a les produits pour fabrique le produit fabrications
     * Sinon elle s'arrête
     * Une entreprise achete le minimum de produit pour produire une unité de produit fini
     * Si elle lui reste un acompte r&d...?
     *
     *
    */
    Entreprise * acteur=(Entreprise*)this->acteur;


}
