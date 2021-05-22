#include <stdio.h>

int main(int argc, char *argv[]) {
	char caracter;
	
	printf("Ingrese un caracter: ");
	scanf(" %c", &caracter);
	
	/* Usamos los valores enteros de la tabla ascii
	las mayusuculas estan entre 65 y 90
	las minusculas entre 97 y 122 */
	if(caracter >= 65 && caracter <= 90)
		printf("Es una MAYUSCULA");
	else if(caracter >= 97 && caracter <= 122)
		printf("Es una MINUSCULA");
	
		
	return 0;
}

