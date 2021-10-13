
#include <iostream>
#include <string.h>
#include <stdlib.h>
#include "TCVect.h"

#define TAILLE 10


using namespace std;



void afficheLog(int n_value);
void afficheLog(float flt_value);
void afficheLog(string str_value);
void afficheLog(char* pt_value);







int main() {
	
	TCVect<int> vect;

	int n_val1 = 2, n_val2 = 10;

	vect.setX(n_val1);
	vect.setY(n_val2);


	vect.affiche();

	TCVect<double> vect2;

	double dbl_val1 = 2.8, dbl_val2 = 5.8;

	vect2.setX(dbl_val1);
	vect2.setY(dbl_val2);


	vect2.affiche();


	TCVect<char>vect3;

	vect3.affiche();


	
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


