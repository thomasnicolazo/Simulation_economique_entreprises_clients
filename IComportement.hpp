/**
* Fichier IComportement.h
* 
* Ce fichier défini l'interface pour le comportement des IActeurs
* 
* 
*/
#include<iostream>
#include<stdlib.h>
#include<IActeur.h>

class IComportement
{
protected:
	IActeur acteur;
public:
	virtual void action();
};