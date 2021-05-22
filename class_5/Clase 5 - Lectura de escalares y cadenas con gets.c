#include <stdio.h>
#define MAX_LINEA 80
#define MAX_FRASE 40

int main(int argc, char *argv[]) {
	int a, b;
	char frase[MAX_FRASE+1];
	char linea[MAX_LINEA+1];
	
	printf("Dame el valor de un entero: ");
	gets(linea); sscanf(linea, "%d", &a);
	
	printf("Introduce ahora una frase: ");
	gets(frase);
	
	printf("Ahora dame el valor de otro entero: ");
	gets(linea); sscanf(linea, "%d", &b);
	
	printf("Enteros leidos: %d y %d\n", a, b);
	printf("Frase leida: '%s'\n", frase);
	
	return 0;
}

