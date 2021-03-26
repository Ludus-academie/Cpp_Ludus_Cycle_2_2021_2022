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
	this->pt_coul = new char[TAILLE];
	strcpy_s(this->pt_coul, TAILLE, "vert");
	n_cpt++;
	
}


CPoint::CPoint(int n_x, int n_y,char *pt_coul)
{
	
	this->n_x = n_x;
	this->n_y = n_y;
	this->pt_coul = new char[TAILLE];
	strcpy_s(this->pt_coul,TAILLE,pt_coul);
	n_cpt++;

}

CPoint::~CPoint()
{
	std::cout << "Destructeur" << std::endl;
	
	delete[] pt_coul;

	n_cpt--;
		
	cout << n_cpt << endl;

}

//Constructeur de copie
CPoint::CPoint(CPoint& p)
{
	this->n_x = p.n_x;
	this->n_y = p.n_y;
	this->pt_coul = new char[TAILLE];
	strcpy_s(this->pt_coul, TAILLE, p.getCoul());
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

char* CPoint::getCoul() const
{
	return this->pt_coul;
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

void CPoint::setCoul(char* pt_coul)
{
	strcpy_s(this->pt_coul, TAILLE, pt_coul);
}



bool coincidePoint(const CPoint& p, const CPoint& q)
{
	
	return p.n_x == q.n_x && p.n_y == q.n_y;

}




//Surcharge opérateur +
CPoint CPoint::operator+(CPoint& p)const
{
	CPoint p_tmp;
	p_tmp.n_x = this->n_x + p.n_x;
	p_tmp.n_y = this->n_y + p.n_y;

	return p_tmp;
}


//Surcharge opérateur + fct amie
/*CPoint operator+(const CPoint& p1, const CPoint& p2)
{
	CPoint p_tmp;
	p_tmp.n_x = p1.n_x + p2.n_x;
	p_tmp.n_y = p1.n_y + p2.n_y;

	return p_tmp;

}*/



//Surcharge operateur =
CPoint CPoint::operator=(const CPoint& p)
{
	
	this->n_x = p.n_x;
	this->n_y = p.n_y;
	this->pt_coul = new char[TAILLE];
	strcpy_s(this->pt_coul, TAILLE, p.getCoul());
	
	return *this;
}


//prefixe
CPoint CPoint::operator++() {

	this->n_x++;
	this->n_y++;

	return *this;

}

//postfixe
CPoint CPoint::operator++(int n) {

	CPoint p_tmp=*this;

	p_tmp.n_x++;
	p_tmp.n_y++;

	return p_tmp;

}