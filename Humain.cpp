#include <iostream>
#include <vector>
#include <time.h>
#include "Humain.hpp"
#include "Produits.hpp"

//-----Méthodes de la classe Humain------//


//------Constructeurs de la classe------//
Humain::Humain(std::string nom_, std::string adresse_, double acompte_, double salaire_) :
    nom = nom_;
    adresse = adresse_;
    acompte = acompte_;
    salaire = salaire_;


//------Destructeur de la classe------//
Humain::~Humain(){};

//------Accesseurs de la classe-------//
double Humain::getSalaire()
{
    return salaire;
}


//------Méthode pour augmenter le compte d'un humain à chaque tour------//
void Humain::salaireTour()
{
    acompte+=salaire;
}

/*
consomme: prend  en entrée une liste de produits mis en vente sur le marche. Le consomateur choisi aléatoirement 
UN produit et si il possède l'argent pour l'acheter, il l'achete. la fonction renvoie le position du prduit dans la liste des 
objets mis en vente.
*/
signed int Humain::consommer(std::vector<Produits> listeProduitsTermine){
    srand (time(NULL));
    int indiceProduitaAchete = rand() % listeProduitTermine;
    if(acompte > listeProduitsTermine[indiceProduitaAchete]){
        acompte -= listeProduitsTermine[indiceProduitaAchete].getPrix();
        return i;
    }
    else
    {
        return -1;
    }

}

// EN DESSOUS pas utilisé

//-----Méthode pour permettre à un humain de consommer------//
//Utilise la mthode d'entreprise "vendre" pour supprimer un produit de l'entrepot.

/*
bool Humain::consommer(Entreprise boite, Produits bien)
{
    if (acompte>bien.getPrix())
    {
        boite.vendre(bien);
        acompte-=bien.getPrix();

    }
    double p=bien.getPrix()   ;
    if(this->acompte-p > 0){
        this->acompte-=p;
        return true;
    }
    return false;

}
*/


/*
//------Méthode décrivant les actions que réalise un humain pendant un tour------//
void Humain::action(){
    //first clear list of actions
    Humain* humanActor=(Humain*)this->acteur;
    if(this->comportements.size()>0){
        this->comportements.clear();
    }
    //Ici, on utilise uniquement l'action "consom".
    IComportement *consom=(IComportement*)new Consommer((Humain&)this->acteur);
    this->comportements.push_back(consom);

    for(auto p=this->comportements.begin();p!=this->comportements.end();p++){
        int accompte=this->acteur->getAcompte();
        (*p)->action();
        if(this->acteur->getAcompte()>0 && accompte>this->acteur->getAcompte()){
            //On essaye d'acheter quelque chose, on suppose qu'on a réussi à acheter.
            IComportement *consom=(IComportement*)new Consommer((Humain&)this->acteur);
            this->comportements.push_back(consom);
        }
    }

}*/
