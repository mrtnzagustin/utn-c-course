#include <stdio.h>
#define TAMANO 5

int main(int argc, char *argv[]) {
	int a[TAMANO], i;
	for(i=0; i<TAMANO; i++){
		printf("Direccion de memoria de a[%d] es: %d\n", i, (unsigned int) &a[i]);
	}
	
	printf("Direccion de memoria de a: %d", (unsigned int) a);
	return 0;
}

