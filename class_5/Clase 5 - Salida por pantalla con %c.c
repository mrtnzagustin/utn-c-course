#include <stdio.h>
#define MAXLON 80

int main(int argc, char *argv[]) {
	char cadena[MAXLON+1] = "un ejemplo";
	printf("La cadena impresa caracter por caracter es: ");
	
	int i = 0;
	while(cadena[i] != '\0'){
		printf("%c",cadena[i]);
		i++;
	}
	return 0;
}

