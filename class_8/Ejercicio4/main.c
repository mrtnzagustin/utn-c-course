#include <stdio.h>
#include "rectas.h"

int main(int argc, char *argv[]) {
	TipoPunto punto1, punto2;
	TipoRecta recta;
	// recta y = x
	recta.a = 1;
	recta.b = 0;
	// punto 0,0
	punto1.x = 0;
	punto1.y = 0;
	// punto 2,5
	punto2.x = 2;
	punto2.y = 5;
	
	if(puntoPerteneceARecta(punto1, recta)){
		printf("El punto 1 (%f,%f) pertenece a la recta y=%f*x+%f\n", punto1.x, punto1.y, recta.a, recta.b);
	} else{
		printf("El punto 1 (%f,%f) NO pertenece a la recta y=%f*x+%f\n", punto1.x, punto1.y, recta.a, recta.b);
	}
	if(puntoPerteneceARecta(punto2, recta)){
		printf("El punto 2 (%f,%f) pertenece a la recta y=%f*x+%f\n", punto2.x, punto2.y, recta.a, recta.b);
	} else{
		printf("El punto 2 (%f,%f) NO pertenece a la recta y=%f*x+%f\n", punto2.x, punto2.y, recta.a, recta.b);
	}
	return 0;
}

