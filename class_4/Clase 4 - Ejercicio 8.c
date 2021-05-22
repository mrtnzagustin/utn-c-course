#include <stdio.h>
#include <stdlib.h>

#define CANTIDAD_NUMEROS_ALEATORIOS 10
#define TOPE_SUPERIOR 180
#define TOPE_INFERIOR 4

int main(int argc, char *argv[]) {
	int numero_aleatorio, semilla, vector_numeros[CANTIDAD_NUMEROS_ALEATORIOS];
	int vector_numeros_copia[CANTIDAD_NUMEROS_ALEATORIOS], suma_aux;
	
	
	// Inicializa la semilla de generador de numeros aleatorios
	printf("Ingrese una semilla para inicializar valor aleatorios: ");
	scanf("%d", &semilla);
	srand(semilla);
	
	// Genera numeros aleatorios
	for(int i = 0; i<CANTIDAD_NUMEROS_ALEATORIOS; i++){
		numero_aleatorio = rand() % (TOPE_SUPERIOR+1); // genera el numero aleatorio
		vector_numeros[i] = numero_aleatorio; // lo almacena en el vector
	}
	
	printf("Vector resultante: ");
	// Muestra el vector resultante
	for(int i = 0; i<CANTIDAD_NUMEROS_ALEATORIOS; i++){
		printf(" [%d] ", vector_numeros[i]);
	}
	
	// Recorremos todas las posiciones del vector copia
	for(int i = 0; i<CANTIDAD_NUMEROS_ALEATORIOS; i++){
		suma_aux = 0; // re inicializamos en cero la suma auxiliar por cada iteracion
		for(int j = i; j<CANTIDAD_NUMEROS_ALEATORIOS; j++){ // recorremos el vector de numeros, desde la posicion i hasta el final 
			suma_aux += vector_numeros[j]; // y vamos sumando cada valor
		}
		vector_numeros_copia[i] = suma_aux;//finalmente almacenamos en la posicion i del vector copia, dicha suma
	}
	
	printf("\nSegundo vector resultante: ");
	// Muestra el vector resultante
	for(int i = 0; i<CANTIDAD_NUMEROS_ALEATORIOS; i++){
		printf(" [%d] ", vector_numeros_copia[i]);
	}
	
	
	
	return 0;
}

