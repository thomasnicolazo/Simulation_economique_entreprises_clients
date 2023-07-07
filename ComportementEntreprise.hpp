#pragma once
#include "IComportement.hpp"
#include "ComportementDecorateur.hpp"
#include "Acheter.hpp"
#include "Vendre.hpp"
#include "Produire.hpp"
#include "Marche.hpp"

class ComportementEntreprise :public virtual IComportement, public virtual ComportementDecorateur
{
private:
//obligate to  hide name?
    Entreprise* acteur;
public:
    ComportementEntreprise(Entreprise &e);
    ~ComportementEntreprise();
    void action() override;
    Entreprise* LookForEntrepriseInstance();
};

