#include "CPointcol.h"
#include <iostream>

using namespace std;

CPointcol::CPointcol(short sn_cl)
{
	sn_couleur = sn_cl;
	
}

CPointcol::CPointcol(int n_x, int n_y, short sn_cl):CPoint(n_x,n_y)
{
	sn_couleur = sn_cl;
}

CPointcol::CPointcol(const CPointcol& p):CPoint(p)
{
	sn_couleur = p.sn_couleur;
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

CPointcol CPointcol::operator+(const CPointcol& p)const
{
	CPointcol pPoint;
	pPoint.n_x = this->n_x + p.n_x;
	pPoint.n_y = this->n_y + p.n_y;

	return pPoint;
}


CPointcol& CPointcol::operator=(const CPointcol& p)
{
	
	this->n_x = this->n_x + p.n_x;
	this->n_y = this->n_y + p.n_y;
	this->sn_couleur = p.sn_couleur;

	return *this;
}


