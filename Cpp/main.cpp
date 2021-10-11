#include "CPoint.h"
#include "CCercle.h"
#include "CPointcol.h"
#include <iostream>
#include <string.h>
#include <stdlib.h>
#include "CVect.h"
#include <string.h>
#define TAILLE 10


using namespace std;



void afficheLog(int n_value);
void afficheLog(float flt_value);
void afficheLog(string str_value);
void afficheLog(char* pt_value);
void modifPoint(CPoint &p);

/*int   minimum(int n_a, int n_b);
float minimum(float n_a, float n_b);*/

//Template fct
template<class T> T minimum(T a, T b);

template <class T> void  traitementTab(T a[], int n);

char* minimum(char* adr1, char* adr2);


int main() {
	
	CPointcol p1(10);
	CPointcol p2(5);

	CPoint p4;
	CPoint p5;

	CPoint p6 = p4 + p5;

	CPoint p7 = p1 + p2;

	CPointcol p8 = p1 + p2;

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

	rn_t = 0;

	//Les cast dynamique
	//idem pointeur
	CPointcol& t=p2;
	CPoint& p = dynamic_cast<CPoint&>(t);


	//Les operateurs de cast explicite classe objet
	int n1 = int(p5);

	//reels
	minimum(2.3, 3.5);

	//Entiers
	minimum(0, 10);
	

	CVect v1(2,3);
	CVect v2(5,6);

	minimum(v1, v2);

	int n_tab[10];

	traitementTab(n_tab, 10);


	char *adr1=new char[10];
	char *adr2 =new char[10];
	strcpy_s(adr1,10, "toto");
	strcpy_s(adr2,10, "tata");

	minimum(adr1, adr2);

	delete adr1;
	delete adr2;


	return 0;
	
}



//Template de fonctions

/*int minimum(int n_a, int n_b) {

	if (n_a < n_b) {
		return n_a;
	}
	else {
		return n_b;
	}

}

float minimum(float n_a, float n_b) {

	if (n_a < n_b) {
		return n_a;
	}
	else {
		return n_b;
	}

}*/

template<class T> T minimum(T a, T b){

	if (a < b) {
		return a;
	}
	else {
		return b;
	}


}

char* minimum(char* adr1, char* adr2) {

	if (strcmp(adr1, adr2) < 0) {
		return adr1;
	}
	else {

		return adr2;
	}

}

template <class T> void traitementTab(T a[], int n) {

	int n_i = 0;
	for (n_i = 0; n_i < n; n_i++) {

		a[n_i] = n_i;
	}


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


