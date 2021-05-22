#include <stdio.h>

enum {Cargar = 1, Guardar, Anadir, Borrar, Modificar, Buscar, Finalizar};

int main(int argc, char *argv[]) {
	
	int opcion;
	
	printf("MENU DE OPCIONES\n");
	printf("-*-*-*-*-*-*-*-*\n");
	printf("1) Cargar registros\n");
	printf("2) Guardar registros\n");
	printf("3) A�adir registros\n");
	printf("4) Borrar registros\n");
	printf("5) Modificar registros\n");
	printf("6) Buscar registros\n");
	printf("7) Finalizar\n");
	
	printf("\nIngrese opcion: ");
	scanf("%d", &opcion);
	
	switch(opcion){
		case Cargar:
			printf("Se ingres� opcion Cargar");
			break;
		case Guardar:
			printf("Se ingres� opcion Guardar");
			break;
		case Anadir:
			printf("Se ingres� opcion Anadir");
		case Borrar:
			printf("Se ingres� opcion Borrar");
		case Modificar:
			printf("Se ingres� opcion Modificar");
			break;
		case Buscar:
			printf("Se ingres� opcion Buscar");
			break;
		case Finalizar:
			printf("Se ingres� opcion Finalizar");
			break;
		default:
			printf("Opcion invalida");
			break;
	}
	
	return 0;
}

