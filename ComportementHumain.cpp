#include "ComportementHumain.hpp"



ComportementHumain::ComportementHumain(Humain* h){
    this->acteur=(Humain*)h;
};
ComportementHumain::~ComportementHumain()=default;


void ComportementHumain::action(){
    //first clear list of actions
    Humain* humanActor=(Humain*)this->acteur;
    if(this->comportements.size()>0){
        this->comportements.clear();
    }
    //we only use consom action here
    IComportement *consom=(IComportement*)new Consommer((Humain*)this->acteur);
    this->comportements.push_back(consom);

    for(auto p=this->comportements.begin();p!=this->comportements.end();p++){
        int accompte=this->acteur->getAcompte();
        (*p)->action();
        if(this->acteur->getAcompte()>0 && accompte>this->acteur->getAcompte()){
            //we try to achete something still we presume we manage to buy a product
            IComportement *consom=(IComportement*)new Consommer((Humain*)this->acteur);
            this->comportements.push_back(consom);
        }
    }

}
