#include <stdio.h>

int main(int argc, char *argv[]) {
	int valor;
	
	do{
		printf("\nIngrese un valor positivo: ");
		scanf("%d", &valor);
	} while(valor <= 0);
	
	printf("\nEl numero ingresado es [%d]", valor);
	
	return 0;
}

