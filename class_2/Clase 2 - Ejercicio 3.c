#include <stdio.h>
#include <math.h> 

/*
	Escribir un programa que calcule el valor de un polinomio de segundo grado 
	de la forma y = ax^2 + b x + c. Manejar a, b, c, x e y como variables del programa.

*/
int main(int argc, char *argv[]) {
	int a = 2, b = 4, c = 5, x = 2, y;
	
	// 2 * 4 + 3 * 2 + 5 = 21
	y = a * pow(x,2) + b * x + c;
	printf("El resultado del polinomio es %d", y);
	return 0;
}

