#include <stdio.h>
#define TAMANO 5

int main(int argc, char *argv[]) {
	int a[TAMANO] = {1, 2, 3 , 4 , 5}, i;
	for(i=0; i<TAMANO+5; i++){
		printf("Valor e de a[%d] es: %d\n", i, a[i]);
	}
		
	
	return 0;
}

