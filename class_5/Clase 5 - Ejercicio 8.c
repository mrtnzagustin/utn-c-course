#include <stdio.h>
#include <string.h>

#define TAMANO_MAX 80

int main(int argc, char *argv[]) {
	char nombre[TAMANO_MAX+1];
	char apellido_uno[TAMANO_MAX+1];
	char apellido_dos[TAMANO_MAX+1];
	char nombre_completo[TAMANO_MAX*3+1] = ""; // el tamano de nombre_completo debe ser suficiente para almacenar las tres cadenas
	
	printf("Ingrese un nombre: ");
	gets(nombre);
	
	printf("Ingrese el primer apellido: ");
	gets(apellido_uno);
	
	printf("Ingrese el segundo apellido: ");
	gets(apellido_dos);
	
	// Vamos "sumando" (concatenando) a nombre_completo, todos los datos
	sprintf(nombre_completo, "%s %s, %s", apellido_uno, apellido_dos, nombre);	
	printf("Nombre completo: %s\n", nombre_completo);
	
	return 0;
}

