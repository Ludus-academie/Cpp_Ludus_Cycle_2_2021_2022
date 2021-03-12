#include "CPoint.h"
#include <iostream>
#include <string.h>
#include <stdlib.h>
//#define TAILLE 10

using namespace std;

void afficheLog(int n_value);
void afficheLog(float flt_value);
void afficheLog(string str_value);
void afficheLog(char* pt_value);

int main() {

	const int TAILLE = 10;
	
	//Instance de la classe CPoint
	char* pt_couleur = new char[TAILLE];
	strcpy_s(pt_couleur,TAILLE,"rouge");
	CPoint p1(0, 0, pt_couleur);
	
	//Tableau de points
	CPoint tab_point[TAILLE];

	for (int n_i = 0; n_i < TAILLE; n_i++) {


		afficheLog(tab_point[n_i].getX());
		afficheLog(tab_point[n_i].getY());
		afficheLog(tab_point[n_i].getCoul());
	}

	//Tableau dynamique de point
	CPoint* pt_point = new CPoint[TAILLE];

	for (int n_i = 0; n_i < TAILLE; n_i++) {


		afficheLog(pt_point[n_i].getX());
		afficheLog(pt_point[n_i].getY());
		afficheLog(pt_point[n_i].getCoul());
	}
	
	

	delete[]pt_couleur;
	delete[]pt_point;
	
	
	/*int *pt_entier = new int;
	delete pt_entier;*/


	return 0;
	
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
