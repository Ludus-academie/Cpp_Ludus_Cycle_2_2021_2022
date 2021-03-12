#include "CPoint.h"
#include <iostream>
#include <string.h>
#include <stdlib.h>


using namespace std;

void afficheLog(int n_value);
void afficheLog(float flt_value);
void afficheLog(string str_value);

int main() {

	//Instance de la classe CPoint
	CPoint p;

	CPoint p1(6, 5,"vert");
	int n_x=0, n_y=0;
	

	cout << "Entrez x:" << endl;
	cin >> n_x;
	cout << "Entrez y:" << endl;
	cin >> n_y;

	p.setX(n_x);
	p.setY(n_y);

	cout << "X :" << endl;
	afficheLog(p.getX());
	cout << "Y :" << endl;
	afficheLog(p.getY());

	cout << "Coul du point : " << endl;
	afficheLog(p.getCoul());
	
	string str_chaine = p.getCoul();

	str_chaine = p1.getCoul();

	cout << str_chaine[3] << endl;
	char c_car = str_chaine[0];


	//relation entre string et char*
	//string => tableau de caractères
	int n_i = 0;
	int n_cpt = 0;
	while (str_chaine[n_i] != '\0') {

		n_cpt = n_i;
		n_i++;
	}

	char* ptr_chaine = (char*)malloc(n_cpt + 2 * sizeof(char));

	for (n_i = 0; n_i <= n_cpt + 1; n_i++) {

		if (ptr_chaine) {
			ptr_chaine[n_i] = str_chaine[n_i];
		}
		
		if (n_i == n_cpt + 1)
		{
			if (ptr_chaine) {
				ptr_chaine[n_i] = '\0';
			}
		}

		
	}

	free(ptr_chaine);
	
	



	





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
