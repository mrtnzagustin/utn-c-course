#include <stdio.h>

void intercambiar(int* a, int* b){
	int aux = (*a); // preservamos en una variable auxiliar el valor de a
	(*a) = (*b); // remplazamos a por el valor de b
	(*b) = aux; // reemplazamos b por el valor de a
}
int main(int argc, char *argv[]) {
	int a = 40, b = 55;
	
	printf("Valor de a [%d] - Valor de b [%d]\n", a, b);
	intercambiar(&a, &b);
	printf("Valor de a [%d] - Valor de b [%d]\n", a, b);
	
	return 0;
}

