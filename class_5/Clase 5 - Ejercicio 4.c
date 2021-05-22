#include <stdio.h>
#include <string.h>

#define TAMANO_MAX 80

int main(int argc, char *argv[]) {
	char cadena[TAMANO_MAX+1]="una Prueba de Cadena", cadena_invertida[TAMANO_MAX+1];
	int i, tamano_cadena;
	
	// obtenemos el tamaño de la cadena
	tamano_cadena = strlen(cadena);
	
	i=0;
	// trabajamos sobre la copia directamente
	while(cadena[i] != '\0'){
		// copiamos siempre el ultimo caracter, exceptuando el final de terminacion, por eso restamos 1
		cadena_invertida[i] = cadena[tamano_cadena - i - 1];
		i++;
	}
	// Agregamos el caracter de finalizacion
	cadena_invertida[i] = '\0';
	
	printf("Cadena original: %s\n", cadena);
	printf("Cadena invertida: %s", cadena_invertida);
	
	return 0;
}

