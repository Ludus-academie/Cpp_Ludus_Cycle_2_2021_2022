#pragma once
#include <string>
#include <iostream>

using namespace std;


//Forward declaration
class CCercle;

class CPoint {


//Encapsulation :
	//Public
	//Private
	//Protected

private :
	//non accessible depuis la classe enfant
	//Données membres
	

	

protected :

	//accessible depuis la classe enfant
	int n_x;
	int n_y;

	

	static int n_cpt;
public :

	//accessible depuis la classe enfant
	CPoint();
	CPoint(int n_x, int n_y);

	//Constructeur de copie
    CPoint(const CPoint& p);

	//Destructeur
	~CPoint();


	//Accesseurs
	int getX()const;
	int getY()const;
	

	static int getCptInstance();

	


	//Mutateurs
	void setX(int n_x=9);
	void setY(int n_y=9);
	

	//Méthode coincide, fcts amie independante de classe
	friend bool coincidePoint(const CPoint & p, const CPoint & q);


	//fct virtuelle
	virtual void afficheLog()const;


	//Surcharge opérateur =

	CPoint &operator =(const CPoint& p);

	


	
};

