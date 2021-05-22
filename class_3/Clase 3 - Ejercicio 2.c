#include <stdio.h>

int main(int argc, char *argv[]) {
	int primer_numero, segundo_numero;
	
	printf("Ingrese el primer numero entero: ");
	scanf("%d", &primer_numero);
	printf("Ingrese el segundo numero entero: ");
	scanf("%d", &segundo_numero);
	
	if(segundo_numero == primer_numero * primer_numero){
		printf("El segundo es el cuadrado exacto del primero\n");
	} else if(segundo_numero < primer_numero * primer_numero) {
		printf("El segundo es menor que el cuadrado del primero");
	} else {
		printf("El segundo es mayor que el cuadrado del primero");
	}
	
	return 0;
}

