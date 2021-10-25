#include "CVecteur.h"
#include "CVecteurLimit.h"


CVecteur::CVecteur(int taille)
{
	nelement = taille;
	pnEntier = new int[taille];
}

CVecteur::~CVecteur()
{
	delete pnEntier;
}

int& CVecteur::operator[](int ni)
{
	// TODO: insert return statement here

	if (ni<0 || ni>nelement) {

		//return pnEntier[0];
		CVecteurLimit limit;

		throw (limit);
		
	}

	return pnEntier[ni];

}
