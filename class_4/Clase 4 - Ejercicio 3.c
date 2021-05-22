#include <stdio.h>
#include <stdlib.h>

#define CANTIDAD_NUMEROS_ALEATORIOS 100
#define TOPE_SUPERIOR 10

int main(int argc, char *argv[]) {
	int numero_aleatorio, semilla, vector_numeros[CANTIDAD_NUMEROS_ALEATORIOS], vector_repetidos[TOPE_SUPERIOR], max_cantidad_veces_repetido, numero_mas_repetido;
	
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
	
	numero_mas_repetido = -1; // Iniciamos el numero mas repetido con -1
	max_cantidad_veces_repetido = 0; // Al comienzo, la cantidad maxima de veces que se repitio el numero es 0
	for(int i=0; i<TOPE_SUPERIOR; i++){ // recorro el vector de las repeticiones
		if(vector_repetidos[i] > max_cantidad_veces_repetido){ // si el numero i, tuvo mas repeticiones que la cantidad maxima que encontré previamente
			max_cantidad_veces_repetido = vector_repetidos[i]; // actualizo la cantidad maxima a la del valor del numero i
			numero_mas_repetido = i; // actualizo el numero mas repetido como el i
		}
	}
	printf("El numero mas repetido fue el [%d] con [%d] veces.", numero_mas_repetido, max_cantidad_veces_repetido);
	
	return 0;
}

