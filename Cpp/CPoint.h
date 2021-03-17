#pragma once
#include <string>
#include <iostream>

using namespace std;

class CPoint {


//Encapsulation :
	//Public
	//Private
	//Protected

private :
	//Données membres
	int n_x;
	int n_y;

	char* pt_coul;

	static int n_cpt;

	

protected :

public :

	
	CPoint();
	CPoint(int n_x, int n_y, char *pt_coul);

	//Constructeur de copie
	CPoint(CPoint& p);

	//Destructeur
	~CPoint();


	//Accesseurs
	int getX()const;
	int getY()const;
	char* getCoul()const;

	static int getCptInstance();

	


	//Mutateurs
	void setX(int n_x=9);
	void setY(int n_y=9);
	void setCoul(char* pt_coul);

	//Passage par référence
	bool coincidePoint(CPoint &p)const;

	//inline
	inline void afficheLog() {

		cout << n_x << n_y << endl;
	}
	



	
};

