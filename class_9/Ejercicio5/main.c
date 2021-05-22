#include <stdio.h>
#include <string.h>
#include "Personas.h"
#define C_MAX_LINEA 80

enum {AgregarPersona = 1, ListarPersonas, Salir};

void mostrar_menu()
{
	printf("****************\n");
	printf("MENU DE OPCIONES\n");
	printf("****************\n");
	printf("1) Agregar Persona\n");
	printf("2) Listar Personas\n");
	printf("3) Salir\n");
	printf("****************\n\n");
}

int mostrar_menu_y_leer_opcion()
{
	int opcion;
	char linea[C_MAX_LINEA+1];
	
	mostrar_menu();
	printf("Ingrese opcion: ");
	gets(linea); sscanf(linea, "%d", &opcion);
	
	return opcion;
}

int main(int argc, char *argv[]) {
	char nombre_archivo[] = "personas.txt";
	TipoListaPersonas personas;
	int opcion;
	
	//cargar_personas(nombre_archivo);
	//leer_personas_desde_archivo(nombre_archivo);
	
	cargar_lista_personas(nombre_archivo, &personas);	
	
	do{
		opcion = mostrar_menu_y_leer_opcion();
		switch(opcion){
			case AgregarPersona:
				if(personas.cantidad_personas == MAX_PERSONAS)
					printf("Se llego al maximo de personas [%d].", MAX_PERSONAS);
				else
					agregar_persona(nombre_archivo, &personas);
				break;
			case ListarPersonas:
				listar_personas_desde_archivo(nombre_archivo);
				break;
			case Salir:
				printf("Cerrando aplicación.\n");
				break;
			default:
				printf("Opcion [%d] invalida, intente nuevamente.\n\n", opcion);
				break;
		}
	} while(opcion != Salir);
	
	return 0;
}


