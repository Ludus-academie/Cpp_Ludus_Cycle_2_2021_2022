#include "CPoint.h"
#include <stdio.h>

void afficheLog(int n_value);
void afficheLog(float flt_value);


int main() {

	//Instance de la classe CPoint
	CPoint p;

	CPoint p1(6, 5);

	


	printf("X:\n");
	afficheLog(p.getX());
	printf("\nY:\n");
	afficheLog(p.getY());

	p.setX();
	p.setY();

	p.setX(15);
	p.setY(20);



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

