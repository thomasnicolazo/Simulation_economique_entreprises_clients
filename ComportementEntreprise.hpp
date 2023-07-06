#pragma once 
#include "IComportement.hpp"
#include "ComportementDecorateur.hpp"
#include "Acheter.hpp"
#include "Vendre.hpp"
#include "Produire.hpp"

class ComportementEntreprise : virtual IComportement, ComportementDecorateur
{

public:
    ComportementEntreprise(Entreprise &e);
    ~ComportementEntreprise();
    void action() override;
    Entreprise* getEntrepriseInstance() override;
    Entreprise* LookForEntrepriseInstance();
};

