#include "CPoint.h"

#include <iostream>
#include <string.h>
#define TAILLE 10

int CPoint::n_cpt = 0;

//constructeurs
CPoint::CPoint()
{

	this->n_x = 0;
	this->n_y = 0;
	
	n_cpt++;
	
}


CPoint::CPoint(int n_x, int n_y)
{
	
	this->n_x = n_x;
	this->n_y = n_y;
	
	n_cpt++;

}

CPoint::~CPoint()
{
	std::cout << "Destructeur" << std::endl;
	
	
	n_cpt--;
		
	cout << n_cpt << endl;

}

//Constructeur de copie
CPoint::CPoint(const CPoint& p)
{
	this->n_x = p.n_x;
	this->n_y = p.n_y;
	n_cpt++;

}



int CPoint::getX()const
{
	
	return n_x;
}

int CPoint::getY()const
{
	return n_y;
}



int CPoint::getCptInstance()
{
	return n_cpt;
}



void CPoint::setX(int n_x)
{
	this->n_x = n_x;
}

void CPoint::setY(int n_y)
{
	this->n_y = n_y;
}





bool coincidePoint(const CPoint& p, const CPoint& q)
{
	
	return p.n_x == q.n_x && p.n_y == q.n_y;

}




void CPoint::afficheLog() const
{
		cout << n_x << n_y << endl;
}

//Surcharge opérateur +
CPoint CPoint::operator+( const CPoint& p)const
{
	
	
	CPoint pPoint;
	pPoint.n_x = this->n_x + p.n_x;
	pPoint.n_y = this->n_y + p.n_y;

	return pPoint;
	
}




//Surcharge operateur =
CPoint& CPoint::operator=(const CPoint& p)
{
	this->n_x = p.n_x;
	this->n_y = p.n_y;
	
	return *this;
}


//prefixe
CPoint& CPoint::operator++() {

	this->n_x++;
	this->n_y++;

	return *this;

}

//postfixe
CPoint& CPoint::operator++(int n) {

	CPoint p_tmp=*this;

	p_tmp.n_x++;
	p_tmp.n_y++;

	return p_tmp;

}




