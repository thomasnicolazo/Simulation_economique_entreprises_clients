#pragma once
#include "ComportementHumain.hpp"



ComportementHumain::ComportementHumain()=default;
ComportementHumain::~ComportementHumain()=default;


void ComportementHumain::action(){
    //first clear list of actions
    if(this->comportements.size()>0){
        this->comportements.clear();
    }
    //we only use acheter action here
    IComportement *acheter=(IComportement*)new Consommer();
    this->comportements.push_back(acheter);

    for(auto p=this->comportements.begin();p!=this->comportements.end();p++){
        int accompte=this->acteur.getAcompte();
        (*p)->action();
        if(this->acteur.getAcompte()>0 && accompte>this->acteur.getAcompte()){
            //we try to achete something still we presume we manage to buy a product
            IComportement *acheter=(IComportement*)new Acheter();
            this->comportements.push_back(acheter);
        }
    }

}