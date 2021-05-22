#include <stdio.h>
#define MAXLON 80
int main(int argc, char *argv[]) {
	char cadena[MAXLON+1];
	
	printf("Ingrese una cadena sin blancos: ");
	/* Observemos que cadena no lleva & 
	y recordemos que el identificador de una variable del 
	tipo vector, es en realidad una referencia de por si a la primera posicion de memoria
	scanf sabe que cuando la marca de formato es %s, debe trabajar contra esa posicion de memoria 
	al igual que printf */
	scanf("%s", cadena); 
	printf("La cadena es %s", cadena);
	return 0;
}

