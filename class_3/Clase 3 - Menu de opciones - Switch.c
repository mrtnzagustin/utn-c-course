#include <stdio.h>

enum {Cargar = 1, Guardar, Anadir, Borrar, Modificar, Buscar, Finalizar};

int main(int argc, char *argv[]) {
	
	int opcion;
	
	printf("MENU DE OPCIONES\n");
	printf("-*-*-*-*-*-*-*-*\n");
	printf("1) Cargar registros\n");
	printf("2) Guardar registros\n");
	printf("3) Añadir registros\n");
	printf("4) Borrar registros\n");
	printf("5) Modificar registros\n");
	printf("6) Buscar registros\n");
	printf("7) Finalizar\n");
	
	printf("\nIngrese opcion: ");
	scanf("%d", &opcion);
	
	switch(opcion){
		case Cargar:
			printf("Se ingresó opcion Cargar");
			break;
		case Guardar:
			printf("Se ingresó opcion Guardar");
			break;
		case Anadir:
			printf("Se ingresó opcion Anadir");
		case Borrar:
			printf("Se ingresó opcion Borrar");
		case Modificar:
			printf("Se ingresó opcion Modificar");
			break;
		case Buscar:
			printf("Se ingresó opcion Buscar");
			break;
		case Finalizar:
			printf("Se ingresó opcion Finalizar");
			break;
		default:
			printf("Opcion invalida");
			break;
	}
	
	return 0;
}

