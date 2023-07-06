#pragma once 
#include "IComportement.hpp"
#include "ComportementDecorateur.hpp"
#include "Acheter.hpp"
class ComportementEntreprise :  virtual IComportement, ComportementDecorateur
{
public:
    ComportementEntreprise();
    ~ComportementEntreprise();
    void action() override;
};

