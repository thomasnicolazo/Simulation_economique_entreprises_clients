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

class IComportement
{
protected:
	IActeur acteur;
public:
	virtual void action();
	IComportement();
	virtual ~IComportement();
};
