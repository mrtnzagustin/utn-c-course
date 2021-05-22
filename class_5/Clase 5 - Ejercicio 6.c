#include <stdio.h>
#include <string.h>

#define TAMANO_MAX 80

int main(int argc, char *argv[]) {
	char cadena[TAMANO_MAX+1];
	int i, tamano_cadena, cantidad_de_palabras = 0;
	
	printf("Ingrese una cadena: ");
	gets(cadena);
	
	// obtenemos el tamaño de la cadena
	tamano_cadena = strlen(cadena);
	
	// recorremos la cadenas	
	int leyendo_palabra = 0; // me indica a cada momento si estoy actualmente leyendo una palabra
	for(i=0; i<tamano_cadena; i++){
		if(cadena[i] != ' '){ // Si la posicion es diferente a un espacio, entonces estoy leyendo una palabra
			leyendo_palabra = 1;
		} else if (leyendo_palabra){ // Si aparecio un espacio y si ya venia leyendo una palabra, entonces termine de leer la palabra
			cantidad_de_palabras++; // cuento la palabra
			leyendo_palabra = 0; // bajo la bandera indicando que aun no inicio otra palabra
		}
	}
	if(leyendo_palabra) // Si el ultimo carater que lei fue diferente al espacio, entonces debo contabilizar esta ultima palabra
		cantidad_de_palabras++;
	
	printf("Cadena original: %s\n", cadena);
	printf("Cantidad de palabras: %d\n", cantidad_de_palabras);
	
	return 0;
}

