#include "CPoint.h"
#include <stdio.h>


//Constructeur sans paramètres
/*CPoint::CPoint()
{
	this->n_x = 10;
	this->n_y = 8;

}*/
//Constructeur avec paramètres
/*CPoint::CPoint(int n_x, int n_y)
{
	this->n_x = n_x;
	this->n_y = n_y;
}*/

/*CPoint::CPoint(int n_y)
{
	this->n_x = 0;
	this->n_y = n_y;
}*/

CPoint::CPoint(int n_x, int n_y)
{
	this->n_x = n_x;
	this->n_y = n_y;
}


int CPoint::getX()const
{
	return n_x;
}

int CPoint::getY()const
{
	return n_y;
}

void CPoint::setX(int n_x)
{
	this->n_x = n_x;
}

void CPoint::setY(int n_y)
{
	this->n_y = n_y;
}
