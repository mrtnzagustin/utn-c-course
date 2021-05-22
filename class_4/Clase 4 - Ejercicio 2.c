#include <stdio.h>
#include <stdlib.h>

#define CANTIDAD_NUMEROS_ALEATORIOS 100
#define TOPE_SUPERIOR 1000

int main(int argc, char *argv[]) {
	int numero_aleatorio, semilla, vector_numeros[CANTIDAD_NUMEROS_ALEATORIOS], vector_repetidos[TOPE_SUPERIOR];
	
	// Inicializar el vector contador de valores repetidos en 0
	// la posicion i del vector, lleva la cuenta de la cantidad de apariciones del numero i
	for(int i=0; i<TOPE_SUPERIOR; i++){
		vector_repetidos[i] = 0;
	}
	
	// Inicializa la semilla de generador de numeros aleatorios
	printf("Ingrese una semilla para inicializar valor aleatorios: ");
	scanf("%d", &semilla);
	srand(semilla);
	
	// Genera numeros aleatorios y a su vez va contando 
	// la cantidad de veces que se genera cada numero
	for(int i = 0; i<CANTIDAD_NUMEROS_ALEATORIOS; i++){
		numero_aleatorio = rand() % (TOPE_SUPERIOR+1); // genera el numero aleatorio
		vector_numeros[i] = numero_aleatorio; // lo almacena en el vector
		vector_repetidos[numero_aleatorio]++; // aumenta la cuenta de dicho valor en el vector de repetidos
	};
	
	printf("Los numeros que aparecen mas de una vez son: ");
	for(int i=0; i<TOPE_SUPERIOR; i++){
		if(vector_repetidos[i]>1){
			printf(" [%d] ", i);
		}
	}
	
	
	
	
	
	return 0;
}

