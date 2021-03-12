#include "CPoint.h"
#include <iostream>
#include <string.h>
#define TAILLE 10

//constructeurs

CPoint::CPoint()
{
	this->n_x = 0;
	this->n_y = 0;
	this->pt_coul = new char[TAILLE];
	strcpy_s(this->pt_coul, TAILLE, "vert");
}


CPoint::CPoint(int n_x, int n_y,char *pt_coul)
{
	this->n_x = n_x;
	this->n_y = n_y;
	this->pt_coul = new char[TAILLE];
	strcpy_s(this->pt_coul,TAILLE,pt_coul);

}

CPoint::~CPoint()
{
	std::cout << "Destructeur" << std::endl;
	delete[] pt_coul;
		
	
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


