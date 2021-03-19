#pragma once


#include"CPoint.h"

class CCercle {

	CPoint pt;
	int n_rayon;

public:
	CCercle(int n_x,int n_y, int n_r);

	//fonction membre de la classe point amie de la classe Cercle, 
	//acc�s aux membres private de CPoint
	friend bool CPoint::collision(CCercle& c);

	//fonction amie de la classe point et cercle, 
	//acc�s aux membres private de CPoint et CCercle
	friend bool collision(CPoint& p, CCercle& c);
};
