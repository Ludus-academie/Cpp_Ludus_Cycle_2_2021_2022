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

	string str_coul;


protected :

public :

	

	CPoint(int n_x=0, int n_y=0,string str_cl="rouge");


	//Accesseurs
	int getX()const;
	int getY()const;
	string getCoul()const;


	//Mutateurs
	void setX(int n_x=9);
	void setY(int n_y=9);
	void setCoul(string str_cl);




	
};

