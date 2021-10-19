
#include <iostream>
#include <string.h>
#include <stdlib.h>

#include "CPoint.h"
#include "CPointcol.h"
#include <list>

#define TAILLE 10


using namespace std;



void afficheLog(int n_value);
void afficheLog(float flt_value);
void afficheLog(string str_value);
void afficheLog(char* pt_value);







int main() {
	
	

	CPoint p;
	CPointcol pc(5,2,255);

	p = pc;
	//methode (CPoint)

	CPoint* pt_p = &p;
	CPointcol* pt_pc = &pc;

	//assignation des pointeurs
	//pt_p = pt_pc;

	//Cast CPointcol sur CPoint
	//pt_pc = (CPointcol*)pt_p;

	/*pt_p->afficheLog();

	pt_pc->afficheLog();

	pt_p = pt_pc;

	pt_p->afficheLog();
	*/

	//Exemple list de point

	list<CPoint> l_point;

	l_point.push_front(p);
	l_point.push_front(pc);

	for (std::list<CPoint>::iterator it = l_point.begin(); it != l_point.end(); ++it) {
		 it->afficheLog();

	}
	
	l_point.pop_back();
		

	for (std::list<CPoint>::iterator it = l_point.begin(); it != l_point.end(); ++it) {
		it->afficheLog();

	}

	l_point.clear();

	

	
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


