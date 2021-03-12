#pragma once
#include <string>

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


protected :

public :

	
	CPoint();
	CPoint(int n_x, int n_y, char *pt_coul);
	~CPoint();


	//Accesseurs
	int getX()const;
	int getY()const;
	char* getCoul()const;
	


	//Mutateurs
	void setX(int n_x=9);
	void setY(int n_y=9);
	void setCoul(char* pt_coul);


	




	
};

