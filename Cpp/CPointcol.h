#pragma once
#include "CPoint.h"

class CPointcol : public CPoint {


	short sn_couleur;

public :


	//Constructeur
	CPointcol(short sn_cl = 0);
	CPointcol(int n_x, int n_y, char* pt_coul, short sn_cl);

	//Destructeur
	~CPointcol();

	//Mutateur
	void setColor(const short sn_cl);
	
	//accesseur
	short getColor()const;

	//sur def afficheLog de CPoint
	void afficheLog()const;








};
