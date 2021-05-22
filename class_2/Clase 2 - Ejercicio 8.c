#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]) {
	
	float lado, perimetro, area;
	
	/** Solicitud de datos */
	printf("Ingrese el valor del lado del cuadrado: ");
	scanf("%f", &lado);
	
	/** Calculo de perimetro y area*/
	perimetro = 4 * lado;
	area = pow(lado, 2);
	printf("Perimetro: {%016f} - Area: {%016f}", perimetro, area);
	return 0;
}

