#include <stdio.h>
#include "extremos.h"

int main(int argc, char *argv[]) {
	int x,y;
	
	printf("Dame un numero: ");
	scanf("%d", &x);
	printf("Dame otro numero: ");  
	scanf("%d", &y);
	printf("El maximo es %d", maximo(x,y));
	return 0;
}

