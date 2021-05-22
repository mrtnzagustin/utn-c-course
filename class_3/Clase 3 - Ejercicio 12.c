#include <stdio.h>

int main(int argc, char *argv[]) {
	int numeroIngresado, numeroMayor = -1; // inicio el valor en uno negativo, para que el primer numero que se ingrese ya sea almacenado
	do{
		printf("Ingrese un numero entero: ");
		scanf("%d", &numeroIngresado);
		printf("El numero ingresado es [%d]\n", numeroIngresado);
		
		if(numeroIngresado > numeroMayor)
			numeroMayor = numeroIngresado;
	} while(numeroIngresado >= 0); // mientras que el numero ingresado sea mayor o igual a cero, sigo pidiendo numeros
	
	printf("El numero mas grande ingresado fue %d", numeroMayor);
	
	return 0;
}

