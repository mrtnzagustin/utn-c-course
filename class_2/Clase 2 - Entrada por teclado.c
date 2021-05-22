#include <stdio.h>

int main(int argc, char *argv[]) {
	int a;
	float b;
	
	printf("Ingrese el valor de a (entero): ");
	scanf("%d", &a);
	printf("\nIngrese el valor de b (real): ");
	scanf("%f", &b);
	
	printf("\nValor de a %d - Valor de b %4.2f", a, b);
	return 0;
}

