#include <stdio.h>

int cuadrado(int numero){
	return numero * numero;
}

int main(int argc, char *argv[]) {
	int numero = 5;
	
	printf("El cuadrado de %d es %d", numero, cuadrado(numero));
	
	return 0;
}

