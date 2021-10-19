
#include <iostream>
#include <string.h>
#include <stdlib.h>

#include "CPoint.h"
#include "CPointcol.h"
#include "Cliste.h"

#define TAILLE 10


using namespace std;



void afficheLog(int n_value);
void afficheLog(float flt_value);
void afficheLog(string str_value);
void afficheLog(char* pt_value);




int main() {
	
	

	//CPoint p; classe abstraite ne peut être instanciée.
	CPointcol pc(5,2,255);

	//CPoint* pt_p = &p;
	CPointcol* pt_pc = &pc;

	Cliste ma_liste;

	//ma_liste.ajoute(&p);
	ma_liste.ajoute(&pc);

	ma_liste.affiche_liste();



	

	
	

	
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


