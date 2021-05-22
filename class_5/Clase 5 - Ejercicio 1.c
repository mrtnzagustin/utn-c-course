#include <stdio.h>
#define TAMANO_MAX 80
int main(int argc, char *argv[]) {
	char cadena[TAMANO_MAX+1]="una prueba de cadena", copia_cadena[TAMANO_MAX+1];
	int i;
	
	i=0;
	while(cadena[i] != '\0'){
		// Depende el valor del caracter, hacemos una u otra copia
		switch(cadena[i]){
			case 'z':
				copia_cadena[i] = 'a';
				break;
			case 'Z':
				copia_cadena[i] = 'A';
				break;
			default: // para cualquier otro caracter
				// si es una letra de la A a la Y o la a a la y, aumentamos el caracter en 1 valor de su tabla ASCII
				if(cadena[i] >= 'A' && cadena[i]<= 'Y' || cadena[i] >= 'a' && cadena[i]<= 'y')
					copia_cadena[i] = cadena[i]+1;
				else // sino, copiamos el caracter tal cual se encuentra
					copia_cadena[i] = cadena[i];
				break;
		}
		i++;
	}
	copia_cadena[i] = '\0';
	printf("Cadena original: %s\n", cadena);
	printf("Cadena encriptada: %s", copia_cadena);
	return 0;
}

