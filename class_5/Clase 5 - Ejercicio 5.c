#include <stdio.h>
#include <string.h>

#define TAMANO_MAX 80

int main(int argc, char *argv[]) {
	char cadena[TAMANO_MAX+1], cadena_invertida[TAMANO_MAX+1];
	int i, tamano_cadena, es_palindromo = 1;
	
	printf("Ingrese una palabra: ");
	scanf("%s", cadena);
	
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
	
	// recorremos las cadenas y las comparamos
	es_palindromo = 1; // suponemos que la cadena es un palindromo hasta que encontremos lo contrario
	for(i=0; i<tamano_cadena; i++){
		if(cadena_invertida[i] != cadena[i]){ // con que un caracter sea diferente es suficiente
			es_palindromo = 0; // para indicar que no es un palindromo
			break;
		}
	}
	
	printf("Cadena original: %s\n", cadena);
	printf("Cadena invertida: %s\n", cadena_invertida);
	if(es_palindromo)
		printf("La cadena es un palindromo\n");
	
	return 0;
}

