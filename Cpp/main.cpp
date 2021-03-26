#include "CPoint.h"
#include "CCercle.h"
#include "CPointcol.h"
#include <iostream>
#include <string.h>
#include <stdlib.h>
#define TAILLE 10

using namespace std;



void afficheLog(int n_value);
void afficheLog(float flt_value);
void afficheLog(string str_value);
void afficheLog(char* pt_value);
void modifPoint(CPoint &p);

int main() {

	CPointcol p1(10);
	char c_Coul[TAILLE];
	strcpy_s(c_Coul, TAILLE, "vert");
	CPointcol p2(0, 0,c_Coul,10);

	p2.setColor(15);
	cout << p2.getColor() << endl;

	p2.afficheLog();
	
	
	

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


