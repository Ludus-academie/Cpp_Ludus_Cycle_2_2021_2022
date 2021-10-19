#include "Cliste.h"

Cliste::Cliste()
{
	pdebut = nullptr;
	pcourant = pdebut;
	
}

Cliste::~Cliste()
{
	element* psuiv;
	pcourant = pdebut;
	while (pcourant != nullptr) {
		psuiv = pcourant->psuivant;
		delete pcourant;
		pcourant=psuiv;
	}
}

void Cliste::ajoute(CPoint* val)
{
	element* p_ele = new element;
	p_ele->psuivant = pdebut;
	p_ele->value = val;
	pdebut = p_ele;

}

void Cliste::premier()
{
	pcourant = pdebut;

}

CPoint* Cliste::prochain()
{
	CPoint* padsuiv = nullptr;
	if (pcourant != nullptr) {
		padsuiv = pcourant->value;
		pcourant = pcourant->psuivant;
	}
	return padsuiv;
}

void Cliste::affiche_liste()
{
	CPoint* p_temp;
	premier();
	while (!fini()) {
		p_temp = (CPoint*)prochain();
		p_temp->afficheLog();
	
	}

}
