#include <stdio.h>
#define MAXLON 80

int main(int argc, char *argv[]) {
	char cadena_1[MAXLON+1], cadena_2[MAXLON+1];
	
	printf("Introduce una cadena: "); 
	gets(cadena_1);
	printf("Introduce otra cadena: "); 
	gets(cadena_2);
	printf("La primera cadena es [%s] y la segunda cadena es [%s]", cadena_1, cadena_2);
	return 0;
}

