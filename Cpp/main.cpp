
#include <iostream>
#include <string.h>
#include <stdlib.h>

#include "CPoint.h"
#include "CPointcol.h"
#include "Cliste.h"
#include <typeinfo>//typeid


#define TAILLE 10


using namespace std;



void afficheLog(int n_value);
void afficheLog(float flt_value);
void afficheLog(string str_value);
void afficheLog(char* pt_value);




int main() {
	
	//Identification de type à l'execution

	CPoint p1, p2;
	CPointcol pc1, pc2;

	CPoint* pp1;
	CPoint* pp2;

	pp1 = &p1;
	pp2 = &p2;

	std::cout << "type de pp1 : " << typeid (pp1).name() << std::endl;
	std::cout << "type de *pp1: " << typeid (*pp1).name() << std::endl;

	if (typeid (*pp1).name() == typeid (*pp2).name()) {
		std::cout << "Sont de meme type" << std::endl;
	}
	else {

		std::cout << "Sont de type different" << std::endl;

	}


	pp1 = &pc1;
	pp2 = &pc2;

	std::cout << "type de pp1 : " << typeid (pp1).name() << std::endl;
	std::cout << "type de *pp1: " << typeid (*pp1).name() << std::endl;

	pp1 = &p1;
	
	if (typeid (*pp1).name() == typeid (*pp2).name()) {
		std::cout << "Sont de meme type" << std::endl;
	}
	else {

		std::cout << "Sont de type different" << std::endl;

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


