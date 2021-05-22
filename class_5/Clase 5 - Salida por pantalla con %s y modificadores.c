#include <stdio.h>
#define MAXLON 80

int main(int argc, char *argv[]) {
	char cadena[MAXLON+1] = "unejemploma21212slargo";
	printf("La cadena es [%s]\n", cadena);
	printf("La cadena es alineada a la derecha [%20s]\n", cadena);
	printf("La cadena es alineada a la izq [%-20s]\n", cadena);
	printf("La cadena es alineada a la derecha y rellenada con ceros [%020s]\n", cadena);
	
	return 0;
}

