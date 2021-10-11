
#include "CVect.h"


int operator<(CVect a, CVect b) {

	return a.n_x * a.n_x + a.n_y * a.n_y < b.n_x* b.n_x + b.n_y * b.n_y;
}

