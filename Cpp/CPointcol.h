#pragma once
#include "CPoint.h"

class CPointcol : public CPoint {


	short sn_couleur;

public :


	//Constructeur
	CPointcol(short sn_cl = 0);
	CPointcol(int n_x, int n_y, short sn_cl);

	 CPointcol(const CPointcol& p);

	//Destructeur
	~CPointcol();

	//Mutateur
	void setColor(const short sn_cl);
	
	//accesseur
	short getColor()const;

	//sur def afficheLog de CPoint
	void afficheLog()const override;

	
	CPointcol operator +(const CPointcol& p)const;

	CPointcol& operator=(const CPointcol& p);



};
