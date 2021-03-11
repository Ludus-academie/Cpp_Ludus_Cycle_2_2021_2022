#include "CPoint.h"
#include <stdio.h>

void afficheLog(int n_value);
void afficheLog(float flt_value);


int main() {

	//Instance de la classe CPoint
	CPoint p;


	p.setX(0);
	p.setY(0);

	printf("X:\n");
	afficheLog(p.getX());
	printf("Y:\n");
	afficheLog(p.getY());

	float flt_f = 12.2;
	afficheLog(flt_f);

	return 0;
}

void afficheLog(int n_value) {

	printf("%d", n_value);

}

void afficheLog(float flt_value) {

	printf("%f", flt_value);
}

