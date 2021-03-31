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
	//Donn�es membres
	

	

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
	

	//M�thode coincide, fcts amie independante de classe
	friend bool coincidePoint(const CPoint & p, const CPoint & q);

	//fonction membre de la classe point amie de la classe Cercle, 
	//acc�s aux membres private de CCercle
	bool collision(CCercle& c);

	//fonction amie de la classe point et cercle, 
	//acc�s aux membres private de CPoint et CCercle
	friend bool collision(CPoint& p, CCercle& c);
	


	void afficheLog()const;


	//Surcharge op�rateur

	//Surcharge op�rateur +
	CPoint operator +( const CPoint& p)const;//p1.operator+(p2)


	//Surcharge operateur + avec une fct amie
	//friend CPoint& operator + (const CPoint& p1,const CPoint &p2);//operator+(p1,p2)

	//Surcharge op�rateur =

	CPoint &operator =(const CPoint& p);

	//Surcharge ++
	//++a
	//a++
	//int b=a

	//Notation pr�fix�
	CPoint &operator++();

	//Notation postfix�
	CPoint operator++(int n);

	


	//conversion de type

	operator int()const  {
		return n_x;
	}

	
};

