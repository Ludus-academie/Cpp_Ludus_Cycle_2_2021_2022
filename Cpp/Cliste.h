#pragma once

#include "CPoint.h"

typedef struct element {

	CPoint *value;
	element* psuivant;
	
}element;


class Cliste {

	element* pdebut;
	element* pcourant;

public : 

	Cliste();
	~Cliste();
	void ajoute(CPoint*);
	void premier();
	CPoint* prochain();
	void affiche_liste();

	int fini() { return (pcourant == nullptr); }

	

};
