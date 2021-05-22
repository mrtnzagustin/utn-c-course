#include <stdio.h>
#define TAMANO_MAX 80
#define OFFSET_ABC 32
int main(int argc, char *argv[]) {
	char cadena[TAMANO_MAX+1]="una Prueba de Cadena", copia_cadena[TAMANO_MAX+1];
	int i;
	
	i=0;
	while(cadena[i] != '\0'){
		// si el caracter proximo a copiar es una letra miniscula
		if(cadena[i] >= 'a' && cadena[i]<= 'z')
			copia_cadena[i] = cadena[i] - OFFSET_ABC; // transforma el caracter a su mayuscula
		else // si es cualquier otro caracter
			copia_cadena[i] = cadena[i];
		i++;
	}
	copia_cadena[i] = '\0';
	
	printf("Cadena original: %s\n", cadena);
	printf("Cadena resultante: %s", copia_cadena);
	return 0;
}

