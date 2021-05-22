#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]) {
	
	float ladoUno, ladoDos, perimetro, area;
	
	/** Solicitud de datos */
	printf("Ingrese el valor del primer lado del rectangulo: ");
	scanf("%f", &ladoUno);
	
	printf("Ingrese el valor del segundo lado del rectangulo: ");
	scanf("%f", &ladoDos);
	
	/** Calculo de perimetro y area*/
	perimetro = 2 * ladoUno + 2 * ladoDos;
	area = ladoDos * ladoUno;
	printf("Perimetro: {%016f} - Area: {%016f}", perimetro, area);
	return 0;
}

