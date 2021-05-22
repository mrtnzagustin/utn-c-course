#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]) {
	
	float ladoUno, ladoDos, ladoTres, perimetro, area, s;
	
	/** Solicitud de datos */
	/*printf("Ingrese el valor del primer lado del triangulo: ");
	scanf("%f", &ladoUno);
	printf("Ingrese el valor del segundo lado del triangulo: ");
	scanf("%f", &ladoDos);
	printf("Ingrese el valor del tercer lado del triangulo: ");
	scanf("%f", &ladoTres);*/
	
	printf("Ingrese el valor del los tres lados del triangulo (dejando un espacio entre cada valor): ");
	scanf("%f %f %f", &ladoUno, &ladoDos, &ladoTres);
	
	
	/** Calculo de perimetro y area*/
	perimetro = ladoUno + ladoDos + ladoTres;
	s = perimetro / 2;
	area = sqrt( s * (s-ladoUno) * (s-ladoDos) * (s-ladoTres));
	printf("Perimetro: {%016f} - Area: {%016f}", perimetro, area);
	return 0;
}

