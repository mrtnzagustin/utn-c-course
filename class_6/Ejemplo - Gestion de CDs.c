#include <stdio.h>
#include <string.h>

#define MAXLINEA 80
#define MAXDISCOS 1000
#define LONTITULO 80
#define LONINTERPRETE 40

// Enum para el menu principal
enum {Agregar = 1, Listar, ListarPorInterprete, Suprimir, Salir };

// Struct para definir el tiempo
struct Tiempo{
	int minutos;
	int segundos;
};

struct CompactDisc{
	char titulo[LONTITULO+1];
	char interprete[LONINTERPRETE+1];
	struct Tiempo duracion;
	int anio;
};

struct Coleccion {
	struct CompactDisc cds[MAXDISCOS];
	int cantidad;
};

int main(int argc, char *argv[]) {
	struct Coleccion mis_cds;
	int opcion, i, j;
	char titulo_ingresado[LONTITULO+1], interprete_ingresado[LONINTERPRETE+1];
	char linea[MAXLINEA]; // Para leer las lineas y evitar scanf
	
	// Inicializo en 0 la coleccion de cds
	mis_cds.cantidad = 0;
	
	// Muestra el menu principal al menos una vez
	do{
		printf("Menu de opciones\n");
		printf("--------------\n");
		printf("1) Agregar CD\n");
		printf("2) Listar CDs\n");
		printf("3) Listar CDs por interprete\n");
		printf("4) Eliminar CD\n");
		printf("5) Salir\n");
		printf("Ingresar opcion: ");
		gets(linea); sscanf(linea, "%d", &opcion);
		
		switch(opcion){
			case Agregar:
				if(mis_cds.cantidad == MAXDISCOS){
					printf("Base de datos llena.\n");
				} else {
					printf("Ingresar datos para agregar CD\n");
					/**
						Aqui recordemos: mis_cds.cds es el vector de cds
						mis_cds.cantidad es la cantidad de cds ingresados, inicialmente 0
						mis_cds.cds[mis_cds.cantidad] es la posicion proxima donde debe ingresarse un cd y es un cd propiamente dicho
						mis_cds.cds[mis_cds.cantidad].titulo es el titulo del cd
						mis_cds.cds[mis_cds.cantidad].interprete es el interprete del cd
						mis_cds.cds[mis_cds.cantidad].anio es el año del cd
						mis_cds.cds[mis_cds.cantidad].duracion es la duracion (struct tiempo) del cd
						mis_cds.cds[mis_cds.cantidad].duracion.minutos son los minutos es la duracion (struct tiempo) del cd
						mis_cds.cds[mis_cds.cantidad].duracion.segundos son los minutos es la duracion (struct tiempo) del cd
					*/
					printf("Ingrese titulo: ");
					gets(mis_cds.cds[mis_cds.cantidad].titulo);
					printf("Ingrese interprete: ");
					gets(mis_cds.cds[mis_cds.cantidad].interprete);
					printf("Ingrese minutos: ");
					gets(linea); sscanf(linea, "%d", &mis_cds.cds[mis_cds.cantidad].duracion.minutos);
					printf("Ingrese segundos: ");
					gets(linea); sscanf(linea, "%d", &mis_cds.cds[mis_cds.cantidad].duracion.segundos);
					printf("Ingrese anio: ");
					gets(linea); sscanf(linea, "%d", &mis_cds.cds[mis_cds.cantidad].anio);
					mis_cds.cantidad++; // Aumento la cantidad de cds
				}
				break;
			case Listar:
				// recorremos mis_cds.cds hasta la posicion mis_cds.cantidad que representa la cantidad ocupada
				for(i=0; i<mis_cds.cantidad; i++)
					printf("%d) %s de %s (%d:%d) %d\n", i+1, // Ejemplo 1) Mis memorias de Juan Agustin Martinez (55:24) 2020
						   mis_cds.cds[i].titulo,
						   mis_cds.cds[i].interprete,
						   mis_cds.cds[i].duracion.minutos,
						   mis_cds.cds[i].duracion.segundos,
						   mis_cds.cds[i].anio);
				break;
			case ListarPorInterprete:
				printf("Ingresar interprete a buscar: ");
				gets(interprete_ingresado);
				for(i=0; i<mis_cds.cantidad; i++){
					if(strcmp(interprete_ingresado, mis_cds.cds[i].interprete) == 0){
						printf("%d) %s de %s (%d:%d) %d\n", i+1, // Ejemplo 1) Mis memorias de Juan Agustin Martinez (55:24) 2020
							   mis_cds.cds[i].titulo,
							   mis_cds.cds[i].interprete,
							   mis_cds.cds[i].duracion.minutos,
							   mis_cds.cds[i].duracion.segundos,
							   mis_cds.cds[i].anio);
					}
				}
				break;
			case Suprimir:
				printf("Ingresar titulo de cd a eliminar: ");
				gets(titulo_ingresado);
				printf("Ingresar interprete de cd a eliminar: ");
				gets(interprete_ingresado);
				for(i=0; i<mis_cds.cantidad; i++){
					if(strcmp(mis_cds.cds[i].titulo, titulo_ingresado) == 0
					   && strcmp(mis_cds.cds[i].interprete, interprete_ingresado) == 0)
						break; // Si encuentra el cd con interprete y titulo indicado, frena la interacion
				}
				// Si el valor de i quedo en un valor menor al maximo de cds, es porque fue encontrado
				if(i<mis_cds.cantidad){
					// corremos todas las posiciones del vector, pisando inicialmente 
					// la posicin del cd que se quiere eliminar
					for(j=i+1; j<mis_cds.cantidad; j++)
						mis_cds.cds[j-1] = mis_cds.cds[j];
					// Actualizamos la cantidad de cd restando 1
					mis_cds.cantidad--;
				}
				break;
			case Salir:
				break;
			default:
				printf("Opcion invalida, ingrese nuevamente\n");
				break;
		}
		
	} while(opcion != Salir);
	
	return 0;
}

