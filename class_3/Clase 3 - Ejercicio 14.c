#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int numeroIngresado;
	
	printf("\nIngrese un numero: ");
	scanf("%d", &numeroIngresado);
	
	// for para recorrer todos los numeros desde el 1 hasta el ingresado
	for(int numeroActual = 1; numeroActual < numeroIngresado; numeroActual++){
		// para cada numero a recorrer, controlamos si es primo
		int cantidadDeDivisores = 0; // variable para contar la cantidad de divisores del numeroActual
		for(int divisor = 1; divisor<=numeroActual; divisor++){ // For para recorrer todos los numeros anteriores a numeroActual (desde 1 hasta numeroActual)
			if(numeroActual % divisor == 0){ // vamos contando la cantidad de divisores del numeroActual
				cantidadDeDivisores++;
			}
		}
		if(cantidadDeDivisores == 2){ // El numero es primo solo si es divisible por uno y por si mismo
			printf("[%d] ", numeroActual);
		}
	};
	
	
	return 0;
}

