#include <stdio.h>

int main(int argc, char *argv[]) {
	int numeroIngresado;
	do{
		printf("Ingrese un numero entero: ");
		scanf("%d", &numeroIngresado);
		printf("El numero ingresado es [%d]\n", numeroIngresado);
	} while(numeroIngresado >= 0); // mientras que el numero ingresado sea mayor o igual a cero, sigo pidiendo numeros
	
	printf("Adios desde C");
	
	return 0;
}

