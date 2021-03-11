#include "CPoint.h"
#include <stdio.h>



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
