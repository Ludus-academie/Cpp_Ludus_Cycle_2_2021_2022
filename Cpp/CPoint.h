#pragma once
#include <string>
#include <iostream>

using namespace std;



class CCercle;

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

	//Méthode coincide, fcts amie independante de classe
	friend bool coincidePoint(const CPoint & p, const CPoint & q);

	//fonction membre de la classe point amie de la classe Cercle, 
	//accès aux membres private de CCercle
	bool collision(CCercle& c);

	//fonction amie de la classe point et cercle, 
	//accès aux membres private de CPoint et CCercle
	friend bool collision(CPoint& p, CCercle& c);
	

	//inline
	inline void afficheLog() {

		cout << n_x << n_y << endl;
	}
	



	
};

