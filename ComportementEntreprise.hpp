#pragma once 
#include "IComportement.hpp"
#include "ComportementDecorateur.hpp"
#include "Acheter.hpp"
#include "Vendre.hpp"
#include "Produire.hpp"

class ComportementEntreprise : virtual IComportement,  ComportementDecorateur
{
private:
//obligate to name hide?
    Entreprise* acteur;
public:
    ComportementEntreprise(Entreprise &e);
    ~ComportementEntreprise();
    void action() override;
    Entreprise* LookForEntrepriseInstance();
};

