#include <stdio.h>

// enum para opciones
enum { Saludar = 1, Salir };

int main(int argc, char *argv[]) {
	int opcion;
	
	do{ // al menos ejecuta una vez
		// impresion del menu
		printf("Menu de opciones\n");
		printf("1) Saludar\n");
		printf("2) Salir\n");
		printf("Ingrese opción: ");
		scanf("%d", &opcion);
		
		// ejecucion de la opcion indicada haciendo uso de switch
		switch(opcion){
			case Saludar:
				printf("Hola desde C\n\n");
				break;
			case Salir:
				printf("Adios desde C\n");
				break;
			default:
				printf("Opcion desconocida o incorrecta\n\n");
				break;
		}
	} while(opcion != Salir); // Mientras la opcion ingresada no haya sido salir, volver a imprimir menu y ejecutar opcion elegida
	
	return 0;
}

