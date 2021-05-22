#include <stdio.h>
#define TAMANO 5

int main(int argc, char *argv[]) {
	int i, a[TAMANO];
	
	// Imprime sin inicializar
	for(i=0; i<TAMANO; i++)
		printf("%d\n", a[i]);
	
	// Imprime inicializando primero en cero todas las
	// posiciones del vector
	for(i=0; i<TAMANO; i++)
		a[i] = 0;
	
	for(i=0; i<TAMANO; i++)
		printf("%d\n", a[i]);
	
	return 0;
}

