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
	
	if(opcion == Cargar){
		printf("Se ingres� opcion Cargar");
	} else if (opcion == Guardar) {
		printf("Se ingres� opcion Guardar");
	} else if (opcion == Anadir) {
		printf("Se ingres� opcion Anadir");
	} else if (opcion == Borrar) {
		printf("Se ingres� opcion Borrar");
	} else if (opcion == Modificar) {
		printf("Se ingres� opcion Modificar");
	} else if (opcion == Buscar) {
		printf("Se ingres� opcion Buscar");
	} else if (opcion == Finalizar) {
		printf("Se ingres� opcion Finalizar");
	}
	return 0;
}

