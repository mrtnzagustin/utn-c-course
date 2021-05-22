#include <stdio.h>
#include "Rectas.h"

int main(int argc, char *argv[]) {
	TipoPunto2D punto;
	TipoRecta2D recta;
	
	// y = x
	recta.a = 1;
	recta.b = 0;
	
	punto.x = 3;
	punto.y = 2;
	
	if(punto_pertenece_recta(punto, recta)){
		printf("El punto (%4.2f,%4.2f) pertenece a la recta y = %4.2f * x + %4.2f", punto.x, punto.y, recta.a, recta.b);
	} else {
		printf("El punto (%4.2f,%4.2f) NO pertenece a la recta y = %4.2f * x + %4.2f", punto.x, punto.y, recta.a, recta.b);	
	}
	return 0;
}
