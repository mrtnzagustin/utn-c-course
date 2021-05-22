#include <stdio.h>
#include <stdlib.h>

#define TOPE_SUPERIOR 45
#define CANTIDAD_NUMEROS_ALEATORIOS 10

int main(int argc, char *argv[]) {
	int numero_aleatorio, semilla;
	
	printf("Ingrese una semilla para inicializar valor randmon: ");
	scanf("%d", &semilla);
	
	srand(semilla);
	
	for(int i = 0; i<CANTIDAD_NUMEROS_ALEATORIOS; i++){
		numero_aleatorio = rand() % (TOPE_SUPERIOR+1);
		printf("Valor aleatorio: %d\n", numero_aleatorio);
	}
	
	return 0;
}

