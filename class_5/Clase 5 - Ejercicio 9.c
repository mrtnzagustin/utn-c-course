#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define TAMANO_MAX 80

int main(int argc, char *argv[]) {
	char frase[TAMANO_MAX+1], frase_solo_alpha[TAMANO_MAX+1], auxiliar = 0;
	
	printf("Ingrese una frase: ");
	gets(frase);
	
	int tamano = strlen(frase);
	
	// recorre toda la cadena original
	for(int i = 0; i<tamano; i++)
		if(isalpha(frase[i])) // si el caracter actual de la cadena, es una letra
			frase_solo_alpha[auxiliar++] = frase[i]; // la copia a la frase resultante, en la posicion que corresponde
	// Observar que la linea anterior utilizamos auxiliar ++
	// esto nos permite primero asingar a frase_solo_alpha[auxiliar] y luego de que esa asignacion de realice, recien ahi se aumenta el valor de auxiliar y ahorramos una linea extra
	
	// Agrega el caracter de terminacion
	frase_solo_alpha[auxiliar]='\0';
	
	printf("Frase resultante: %s", frase_solo_alpha);
	
	return 0;
}

