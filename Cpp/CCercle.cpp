#include "CCercle.h"

CCercle::CCercle(int n_x, int n_y, int n_r)
{
	pt.setX(n_x);
	pt.setY(n_y);
	this->n_rayon = n_r;
	for (int n_i = 0; n_i < TAILLE; n_i++) {
		tab_pt[n_i].setX();
		tab_pt[n_i].setY();
	}



		
}

CPoint &CCercle::operator[](int n_i)
{
	if (n_i >= 0 && n_i < TAILLE) {
		return tab_pt[n_i];
	}
	return tab_pt[0];
}

//fonction membre de la classe point amie de la classe cercle, 
//accès aux membres private de CCercle
bool CPoint::collision(CCercle& c)
{

	int n_d2 = (this->n_x - c.pt.n_x) * (this->n_x - c.pt.n_x) + (this->n_y - c.pt.n_y) * (this->n_y - c.pt.n_y);
	if (n_d2 > c.n_rayon * c.n_rayon)
		return false;
	else
		return true;

}



//fonction amie de la classe point et cercle, 
//accès aux membres private de CPoint et CCercle
bool collision(CPoint& p, CCercle& c)
{
	int n_d2 = (p.n_x - c.pt.n_x) * (p.n_x - c.pt.n_x) + (p.n_y - c.pt.n_y) * (p.n_y - c.pt.n_y);
	if (n_d2 > c.n_rayon * c.n_rayon)
		return false;
	else
		return true;
}




