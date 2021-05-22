#include <stdio.h>
#include <stdlib.h>

#define CANTIDAD_NUMEROS_ALEATORIOS 10
#define TOPE_SUPERIOR 4

int main(int argc, char *argv[]) {
	int numero_aleatorio, semilla, vector_numeros[CANTIDAD_NUMEROS_ALEATORIOS];
	int tamano_secuencia_mas_larga = 0, tamano_secuencia_actual = 1;
	
	// Inicializa la semilla de generador de numeros aleatorios
	printf("Ingrese una semilla para inicializar valor aleatorios: ");
	scanf("%d", &semilla);
	srand(semilla);
	
	// Genera numeros aleatorios
	for(int i = 0; i<CANTIDAD_NUMEROS_ALEATORIOS; i++){
		numero_aleatorio = rand() % (TOPE_SUPERIOR+1); // genera el numero aleatorio
		vector_numeros[i] = numero_aleatorio; // lo almacena en el vector
	};
	
	printf("Vector resultante: ");
	// Muestra el vector resultante
	for(int i = 0; i<CANTIDAD_NUMEROS_ALEATORIOS; i++){
		printf(" [%d] ", vector_numeros[i]);
	};
	
	// Recorremos el vector hasta la ante ultima posicion -> condicion: i<CANTIDAD_NUMEROS_ALEATORIOS-1
	for(int i = 0; i<CANTIDAD_NUMEROS_ALEATORIOS-1; i++){
		if(vector_numeros[i] == vector_numeros[i+1]){ // Si la posicion actual, es igual a la posicion siguiente
			tamano_secuencia_actual++; // Aumento en 1 el tamaño de la secuencia actual
			if(tamano_secuencia_actual > tamano_secuencia_mas_larga){ // A su vez, si el tamaño actual de la secuencia supera al de la secuencia mas larga
				tamano_secuencia_mas_larga = tamano_secuencia_actual; // Modifico el valor de la secuencia mas larga por el que actualmente tiene la secuencia actual
			}
		} else { // Si la posicion actual no es igual a la siguiente
			tamano_secuencia_actual = 1; // vuelvo a iniciar el tamaño de la secuencia en 1, porque cambio el numero
		}
	};
	
	printf("\n");
	if(tamano_secuencia_mas_larga > 1){ // Solo se que existio una secuencia si el tamano de la secuencia mas larga es mayor que 1, es decir tiene mas de 1 numero 
		printf("La secuencia mas larga tiene [%d] numeros\n", tamano_secuencia_mas_larga);
	} else {
		printf("No existe ninguna secuencia de mas de un numero en el vector generado\n");
	}
	
	return 0;
}

