#include <stdio.h>
#include <math.h> 

/*
	Escribir un programa que calcule el valor de un polinomio de segundo grado 
	de la forma y = ax^2 + b x + c. Manejar a, b, c, x e y como variables del programa.

*/
int main(int argc, char *argv[]) {
	int a, b, c, x, y;
	
	printf("Ingrese el valor para a (y=ax^2+bx+c): ");
	scanf("%d", &a);
	printf("Ingrese el valor para b (y=ax^2+bx+c): ");
	scanf("%d", &b);
	printf("Ingrese el valor para c (y=ax^2+bx+c): ");
	scanf("%d", &c);
	printf("Ingrese el valor para x (y=ax^2+bx+c): ");
	scanf("%d", &x);
	// 2 * 4 + 3 * 2 + 5 = 21
	y = a * pow(x,2) + b * x + c;
	printf("El resultado del polinomio es %d", y);
	return 0;
}

