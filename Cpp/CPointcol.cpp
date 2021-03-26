#include "CPointcol.h"
#include <iostream>

using namespace std;

CPointcol::CPointcol(short sn_cl)
{
	sn_couleur = sn_cl;
	
}

CPointcol::CPointcol(int n_x, int n_y, char* pt_coul, short sn_cl):CPoint(n_x,n_y,pt_coul)
{
	sn_couleur = sn_cl;
}

CPointcol::~CPointcol()
{

}

void CPointcol::setColor(const short sn_cl)
{
	this->sn_couleur = sn_cl;
}

short CPointcol::getColor() const
{
	return this->sn_couleur;
}

void CPointcol::afficheLog()const
{
	CPoint::afficheLog();
	cout << this->sn_couleur << endl;


}
