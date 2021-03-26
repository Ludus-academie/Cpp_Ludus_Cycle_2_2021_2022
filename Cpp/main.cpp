#include "CPoint.h"
#include "CCercle.h"
#include <iostream>
#include <string.h>
#include <stdlib.h>
//#define TAILLE 10

using namespace std;



void afficheLog(int n_value);
void afficheLog(float flt_value);
void afficheLog(string str_value);
void afficheLog(char* pt_value);
void modifPoint(CPoint &p);

int main() {

	const int TAILLE = 10;
	
	//Instance de la classe CPoint
	char* pt_couleur = new char[TAILLE];
	strcpy_s(pt_couleur,TAILLE,"rouge");
	CPoint p1(0, 0, pt_couleur);
	
	CPoint p2(0, 2, pt_couleur);


	//Constructeur de copie
	
	CPoint p3(p1);

	CPoint p4 = p2;


	//Surcharge opérateur
	p4=p1 +p2;

	//Surcharge ++

	p4 = p1++;//postfixe
	
	p4 = ++p1;//prefixe

	CCercle c(0, 0, 10);

	cout << c[0].getX() << c[0].getY() << endl;

	c[0] = p4;

	cout << c[0].getX() << c[0].getY() << endl;

	return 0;
	
}

//Passage par référence
void modifPoint(CPoint &p) {

	p.setX(12);
	p.setY(25);
	strcpy_s(p.getCoul(), 10, "Orange");
	

}



void afficheLog(int n_value) {

	cout <<"Log : "<< n_value << endl;

}

void afficheLog(float flt_value) {

	cout <<"Log : "<< flt_value << endl;
}

void afficheLog(string str_value) {

	cout << "Log : " << str_value << endl;
}

void afficheLog(char* pt_value) {

	cout << "Log : " << pt_value << endl;

}


