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
	//strcpy(nombre_completo, ""); // Fijarse que declaramos nombre_completo con una cadena "vacia" , sino seria necesaria esta linea primero para evitar la basura de la memoria
	strcat(nombre_completo, nombre);
	strcat(nombre_completo, ", ");
	strcat(nombre_completo, apellido_uno);
	strcat(nombre_completo, " ");
	strcat(nombre_completo, apellido_dos);
	
	printf("Nombre completo: %s\n", nombre_completo);
	
	return 0;
}

