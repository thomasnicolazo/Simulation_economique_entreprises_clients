#include <iostream>
#include <deque>


//-----Interface des entreprises et des humains------//
class IActeur
{
protected :

    std::string nom;
    std::string adresse;
    double acompte;
    //Comportement:IComportement

public:
    IActeur(std::string nom_, std::string adresse_, double acompte_) :
        nom(nom_),
        adresse(adresse_),
        acompte(acompte_)
        {}
    virtual ~IActeur(){};

};

class Entreprise : public IActeur
{
protected :
    std::string nomContact;
    int nbrEmploye;
    double revenuTour;
    double depenseTour;
    //std::deque<Produit> productionTour;
    //enum rechercheEtDev;
    //ProduitFini produitFabrication;


public:

    Entreprise(std::string nom_, std::string adresse_, double acompte_,\
               int nbrEmploye_, double revenuTour_, double depenseTour_,\
               std::deque<Produit> productionTour_, ProduitFini produitFabrication_) :
        IActeur(nom_,adresse_, acompte_),
        nbrEmploye(nbrEmploye_),


    ~Entreprise(){};

    std::deque<Produit> produire()
    {

    }

    void commande(Produit produit, Entreprise boite)
    {

    }

    void vendre()
    {

    }

    void rapportDetailTour()
    {

    }


};

class Humain : public IActeur
{
private :
    double salaire;

public :
    Humain(std::string nom_, std::string adresse_, double acompte_, double salaire_) :
        IActeur(nom_,adresse_, acompte_),
        salaire(salaire_)
        {};

    ~Humain(){};

    double salaireTour()
    {
        acompte+=salaire;

    }

    void consommer(ProduitFini bien)
    {

    }
};


int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
