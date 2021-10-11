#pragma once
#include <iostream>



class CVect {

	int n_x, n_y;


public :

	CVect(int n_x, int n_y) {

		this->n_x = n_x;
		this->n_y = n_y;

	}

	void afficheVect() {

		std::cout << "X : " << this->n_x;
		std::cout << "Y : " << this->n_y;
	}

	friend int operator<(CVect a, CVect b);



};