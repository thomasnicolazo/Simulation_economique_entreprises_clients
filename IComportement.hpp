/**
* Fichier IComportement.hpp
*
* Ce fichier défini l'interface pour le comportement des IActeurs
*
*
*/
#pragma once
#include<stdlib.h>
#include"IActeur.hpp"
class IActeur;
class IComportement
{
public:

	IActeur* acteur;
public:
	virtual void action();
	virtual ~IComportement();
	IComportement();

};
