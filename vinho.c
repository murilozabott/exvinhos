#include <stdio.h>
#include "vinho.h"

struct _vinho {
	int id;
	double citric_acid, residual_sugar, density, ph, alcohol;
};

void print_vinho(vinho *v){
	printf("ID: %d, ", v->id);
	printf("Citric Acid: %f, ", v->citric_acid);
	printf("Residual Sugar: %f, ", v->residual_sugar);
	printf("Density: %f, ", v->density);
	printf("pH: %f, ", v->ph);
	printf("Alcohol: %f\n", v->alcohol);
}