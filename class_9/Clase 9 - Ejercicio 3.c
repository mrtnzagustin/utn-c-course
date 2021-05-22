#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX_FRASE 80

int main(int argc, char *argv[]) {
	char frase[MAX_FRASE+1];
	FILE * archivo;
	int tamano_frase;
	
	printf("Ingrese una frase: ");
	gets(frase);
	
	archivo = fopen("letras.txt", "w");
	
	// Trabajar sobre el archivo
	tamano_frase = strlen(frase);
	for(int i = 0; i<tamano_frase; i++){
		if(isalpha(frase[i])){
			fprintf(archivo, "%c\n", frase[i]);
		}
	}
	
	fclose(archivo);
	
	return 0;
}

