#pragma once
#include "ComportementHumain.hpp"



ComportementHumain::ComportementHumain()=default;
ComportementHumain::~ComportementHumain()=default;


void ComportementHumain::action(){
    IComportement *acheter=(IComportement*)new Acheter();
    this->comportements.push_back(acheter);

}