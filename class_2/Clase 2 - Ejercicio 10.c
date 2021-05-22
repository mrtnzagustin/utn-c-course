#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]) {
	
	float radio, perimetro, area;
	
	/** Solicitud de datos */
	printf("Ingrese el valor del radio de la circunferencia: ");
	scanf("%f", &radio);
	
	/** Calculo de perimetro y area*/
	perimetro = 2 * 3.14 * radio;
	area = 3.14 * pow(radio, 2);
	printf("Perimetro: {%016f} - Area: {%016f}", perimetro, area);
	return 0;
}

