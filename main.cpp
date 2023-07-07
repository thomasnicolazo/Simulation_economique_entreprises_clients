/**
*Fichier d'entree pour la solution
* 
* 
* 
* 
**/
#include "Marche.hpp"
#include <deque>
#include "Produits.hpp"
#include "Entreprise.hpp"


int main() {

	std::deque<Entreprise> *tmp_entreprises=new std::deque<Entreprise>();
	Entreprise* ent1=new Entreprise();
	ent1->setNom("entreprise1");
	Entrepot* entr_ent1=new Entrepot();
	ent1->setEntrepot(*entr_ent1); 
	Entreprise* ent2=new Entreprise();
	ent2->setNom("entreprise2");
	Entrepot* entr_ent2=new Entrepot();
	ent2->setEntrepot(*entr_ent2); 
	Entreprise* ent3=new Entreprise();

	Entrepot* entr_ent3=new Entrepot();
	ent3->setEntrepot(*entr_ent3); 
	
	ent3->setNom("entreprise3");
	
	Entreprise* ent4=new Entreprise();
	Entrepot* entr_ent4=new Entrepot();
	ent4->setEntrepot(*entr_ent4);
	ent4->setNom("entreprise4"); 
	
	Entreprise* ent5=new Entreprise();
	Entrepot* entr_ent5=new Entrepot();
	ent5->setEntrepot(*entr_ent5); 
	ent5->setNom("entreprise5");

	Entreprise* ent6=new Entreprise();
	Entrepot* entr_ent6=new Entrepot();
	ent6->setEntrepot(*entr_ent6);
	ent6->setNom("entreprise6");

	tmp_entreprises->push_back(*ent1);
	

	//adding 3 base product
	ProduitFini *prodEnt1 =new ProduitFini("clou",1,1,ent1->getNom());
	prodEnt1->setPrix(5);
	ent1->setProduitFabrication(*prodEnt1);
	ProduitFini* prodEnt2 =new ProduitFini("vis",1,1,ent2->getNom());
	prodEnt2->setPrix(10);
	ent2->setProduitFabrication(*prodEnt2);
	ProduitFini* prodEnt3 =new ProduitFini("colle",1,1,ent3->getNom());
	prodEnt3->setPrix(7);
	ent2->setProduitFabrication(*prodEnt3);
	
	//adding 3 refined product
	ProduitFini* prodEnt4 =new ProduitFini("boite",2,2,ent4->getNom());
	prodEnt4->setPrix(25);
	ent4->setProduitFabrication(*prodEnt4);
	std::deque<Produits>* tour4=new std::deque<Produits>();
	tour4->push_back((*prodEnt1));
	tour4->push_back((*prodEnt2));
	ent3->setProductionTour((*tour4));
	
	
	ProduitFini* prodEnt5 =new ProduitFini("bouteille",4,4,ent5->getNom());
	prodEnt5->setPrix(35);
	ent5->setProduitFabrication(*prodEnt4);
	std::deque<Produits>* tour5=new std::deque<Produits>();
	tour5->push_back((*prodEnt1));
	tour5->push_back((*prodEnt3));
	ent3->setProductionTour((*tour5));
	
	ProduitFini* prodEnt6 =new ProduitFini("sardine",6,6,ent6->getNom());
	prodEnt4->setPrix(25);
	ent6->setProduitFabrication(*prodEnt6);
	std::deque<Produits>* tour6=new std::deque<Produits>();
	tour6->push_back((*prodEnt3));
	tour6->push_back((*prodEnt2));
	ent3->setProductionTour((*tour6));



	std::deque<Humain> *tmp_Humain=new std::deque<Humain>();
	//adding 3humans

	Humain* h1=new Humain("pol","21",23.5,12.2);
	Humain* h2=new Humain("pouel","21",2.5,1.2);
	Humain* h3=new Humain("poulet","21",2.5,22.2);
	tmp_Humain->push_back(*h1);
	tmp_Humain->push_back(*h2);
	tmp_Humain->push_back(*h3);

	tmp_entreprises->push_back(*ent1);
	tmp_entreprises->push_back(*ent2);
	tmp_entreprises->push_back(*ent3);
	tmp_entreprises->push_back(*ent4);
	tmp_entreprises->push_back(*ent5);
	tmp_entreprises->push_back(*ent6);
	int count=0;
	Marche * instanceMarche=Marche::getInstance();
	instanceMarche->setListEntreprise(*tmp_entreprises);
	instanceMarche->setListHumain(*tmp_Humain);
	while(count<1000){
		instanceMarche->Tour();

		count++;
	}
	delete tmp_entreprises;
	delete tmp_Humain;
	delete ent1;
	delete ent2;
	delete ent3;
	delete ent4;
	delete ent5;
	delete ent6;
	delete prodEnt1;
	delete prodEnt2;
	delete prodEnt3;
	delete prodEnt4;
	delete prodEnt5;
	delete prodEnt6;
	delete tour4;
	delete tour5;
	delete tour6;
	delete h1;
	delete h2;
	delete h3;
	delete instanceMarche;
	return 0;
}