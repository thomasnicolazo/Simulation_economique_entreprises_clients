#ifndef ICOMPORTEMENT_HPP_INCLUDED
#define ICOMPORTEMENT_HPP_INCLUDED
/**
* Fichier IComportement.hpp
*
* Ce fichier défini l'interface pour le comportement des IActeurs
*
*
*/
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



#endif // ICOMPORTEMENT_HPP_INCLUDED
