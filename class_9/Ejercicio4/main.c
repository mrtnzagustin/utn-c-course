#include <stdio.h>
#include <string.h>
#include "Personas.h"

int main(int argc, char *argv[]) {
	char nombre_archivo[] = "personas.txt";
	
	cargar_personas(nombre_archivo);
	
	leer_personas_desde_archivo(nombre_archivo);	
	
	return 0;
}
	
	
