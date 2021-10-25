
#include <iostream>
#include <string.h>
#include <stdlib.h>

#include "CVecteur.h"
#include "CVecteurLimit.h"


#define TAILLE 10


using namespace std;



void afficheLog(int n_value);
void afficheLog(float flt_value);
void afficheLog(string str_value);
void afficheLog(char* pt_value);




int main() {
	
	//Gestion des exeptions

	CVecteur v(10);
	try {
		for (int ni = 0; ni < 10; ni++) {

			v[ni] = ni;
			std::cout << v[ni] << std::endl;
		}

		v[15] = 15;
	}
	catch (CVecteurLimit limit) {

		std::cout << "exception limite" << std::endl;

		exit(-1);
	}
	
	

	
	

	
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


