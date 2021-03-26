#pragma once


#include"CPoint.h"
const int TAILLE = 10;

class CCercle {

	CPoint pt;
	int n_rayon;

	CPoint tab_pt[TAILLE];

public:
	CCercle(int n_x,int n_y, int n_r);

	//fonction membre de la classe point amie de la classe Cercle, 
	//accès aux membres private de CPoint
	friend bool CPoint::collision(CCercle& c);

	//fonction amie de la classe point et cercle, 
	//accès aux membres private de CPoint et CCercle
	friend bool collision(CPoint& p, CCercle& c);

	//Surcharge operateur []
	CPoint &operator[](int n_i);
};
