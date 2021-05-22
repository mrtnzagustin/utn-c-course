#include <stdio.h>

#define MAXNOM 40
#define LONDNI 10
#define MAXLINEA 80

struct Persona{
	char nombre[MAXNOM+1];
	int edad;
	char dni[LONDNI+1];
};
int main(int argc, char *argv[]) {
	struct Persona ejemplo;
	char linea[MAXLINEA+1];
	
	printf("Nombre: "); gets(ejemplo.nombre);
	printf("Edad: "); gets(linea); sscanf(linea, "%d", &ejemplo.edad);
	printf("DNI: "); gets(ejemplo.dni);
	
	printf("Nombre leido: %s\n", ejemplo.nombre);
	printf("Edad leida: %d\n", ejemplo.edad);
	printf("DNI leido: %s\n", ejemplo.dni);
	return 0;
}

