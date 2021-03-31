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
	CPointcol p2(5);

	CPoint p4;
	CPoint p5;

	CPoint p6 = p4 + p5;

	CPoint p7 = p1 + p2;

	CPointcol p8 = p1+p2;

	p8 = p1 + p8;

	p6 = p1 + p2;


	
	//Les conversions de types en C++
	//Rappel en C
	float flt_p = 5.0;
	int n_p = 5;

	n_p = (int)flt_p; 

	//En C++

	//static_cast
	void* vp=nullptr;
	//long* lp = vp; non

	long* lp = static_cast<long*>(vp);

	double dbl_d=0.0;
	float flt_f = static_cast<float>(dbl_d);

	//reinterpret_cast
	double *pdbl_d = nullptr;
	//float *pflt_f = static_cast<float>(pdbl_d); Non

	float* pflt_f = reinterpret_cast<float*>(pdbl_d); 

	//const_cast
	int n_i = 65;
	const int& rn_o = n_i;
	//int& rn_t = rn_o; Non
	int& rn_t = const_cast<int&>(rn_o); 

	//Les cast dynamique
	//idem pointeur
	CPointcol& t=p2;
	CPoint& p = dynamic_cast<CPoint&>(t);


	//Les operateurs de cast explicite classe objet
	int n1 = int(p5);

	

	return 0;
	
}

//Passage par référence
void modifPoint(CPoint &p) {

	p.setX(12);
	p.setY(25);
	
	

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


