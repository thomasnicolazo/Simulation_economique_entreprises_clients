/**
* Fichier IComportement.h
* 
* Ce fichier d�fini l'interface pour le comportement des IActeurs
* 
* 
*/
#include<iostream>
#include<stdlib>
#include<IActeur.h>

class IComportement
{
private:
	IActeur acteur;
public:
	virtual void action();
};