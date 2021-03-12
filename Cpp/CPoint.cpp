#include "CPoint.h"
#include <stdio.h>



//constructeur
CPoint::CPoint(int n_x, int n_y,string str_cl)
{
	this->n_x = n_x;
	this->n_y = n_y;
	this->str_coul = str_cl;
}


int CPoint::getX()const
{
	return n_x;
}

int CPoint::getY()const
{
	return n_y;
}

string CPoint::getCoul() const
{
	return str_coul;
}

void CPoint::setX(int n_x)
{
	this->n_x = n_x;
}

void CPoint::setY(int n_y)
{
	this->n_y = n_y;
}

void CPoint::setCoul(string str_cl)
{
	this->str_coul = str_cl;
}
