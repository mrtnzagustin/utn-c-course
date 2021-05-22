#include <stdio.h>
#include <string.h>

#define TAMANO_MAX 80
#define OFFSET_ABC 32

int main(int argc, char *argv[]) {
	char cadena[TAMANO_MAX+1]="una Prueba de Cadena", copia_cadena[TAMANO_MAX+1];
	int i;
	
	// copia la cadena completa
	strcpy(copia_cadena, cadena);
	
	i=0;
	// trabajamos sobre la copia directamente
	while(copia_cadena[i] != '\0'){
		// si el caracter actual es una letra miniscula, la reemplaza
		if(copia_cadena[i] >= 'a' && copia_cadena[i]<= 'z')
			copia_cadena[i] = copia_cadena[i] - OFFSET_ABC; // transforma el caracter a su mayuscula
		i++;
	}
	// esta linea ya no es mas necesaria porque strcpy se encargo de copiarla
	//copia_cadena[i] = '\0';
	
	printf("Cadena original: %s\n", cadena);
	printf("Cadena resultante: %s", copia_cadena);
	return 0;
}

