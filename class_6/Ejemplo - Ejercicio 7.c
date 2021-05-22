#include <stdio.h>
#include <string.h>
#define MAX_NUMEROS_TELEFONO 10
#define MAX_ENTRADAS_AGENDA 100
#define LARGO_NOMBRE 20
#define LARGO_TELEFONO 10
#define MAX_LINEA 80

// Enum para el menu
enum {AgregarEntrada=1, AgregarTelefono, BorrarEntrada, BorrarTelefono, Buscar, Salir};

// Struct para una entrada de la agenda
struct EntradaAgenda {
	char nombre[LARGO_NOMBRE+1];
	int numeros_telefono[MAX_NUMEROS_TELEFONO];
	int cantidad_numeros_telefono;
};

typedef struct EntradaAgenda TipoEntradaAgenda;

// Struct para la agenda en si misma
struct Agenda{
	TipoEntradaAgenda entradas[MAX_ENTRADAS_AGENDA];
	int cantidad_entradas;
};

typedef struct Agenda TipoAgenda;

int main(int argc, char *argv[]) {
	TipoAgenda agenda;
	int opcion, i, j, h, cantidad_numeros, telefono_busqueda;
	char linea[MAX_LINEA+1]; // Auxiliar para lectura de lineas
	char nombre_busqueda[LARGO_NOMBRE+1]; // Auxiliar para lectura de nombre a utilizar en busqueda
	char nombre_actual_recortado[LARGO_NOMBRE+1]; // Auxiliar para almacenar cada nombre de las entradas con menos caracteres (para luego comparar contra lo ingresado en busqueda)
	
	// inicializamos la cantidad de agenda en 0
	agenda.cantidad_entradas = 0;
	
	do{
		printf("\nMenu de opciones\n");
		printf("--------------\n");
		printf("1) Agregar entrada\n");
		printf("2) Agregar telefono\n");
		printf("3) Borrar entrada\n");
		printf("4) Borrar telefono\n");
		printf("5) Buscar\n");
		printf("6) Salir\n");
		printf("Ingresar opcion: ");
		gets(linea); sscanf(linea, "%d", &opcion);
		
		switch(opcion){
			case AgregarEntrada:
				if(agenda.cantidad_entradas == MAX_ENTRADAS_AGENDA){ // Si se llego al maximo de entradas, no permite carga
					printf("Llegaste al maximo de entradas\n");
				} else { // Si no llego al maximo, se puede cargar
					printf("Ingresar nombre: ");
					gets(agenda.entradas[agenda.cantidad_entradas].nombre); // Guarda el nombre en la proxima posicion libre
					agenda.entradas[agenda.cantidad_entradas].cantidad_numeros_telefono = 0; // Inicializa la cantidad de numeros de telefono en 0
					agenda.cantidad_entradas++; // aumenta la cantidad de entradas de la agenda
				}
				break;
			case AgregarTelefono:
				printf("Insertar nombre: ");
				gets(nombre_busqueda); // Pide el nombre de la entrada donde se desea agregar un telefono
				for(i=0; i<agenda.cantidad_entradas; i++){ // recorre toda la agenda
					if(strcmp(agenda.entradas[i].nombre, nombre_busqueda) == 0){ // Si coincide algun nombre con esa entrada, frena la iteracion
						break; // i termina valiendo el valor de la posicion donde esta esa entrada
					}
				}
				if(i<agenda.cantidad_entradas){// si i no llego al final, es porque lo encontro al nombre en la entrada i
					if(agenda.entradas[i].cantidad_numeros_telefono == MAX_NUMEROS_TELEFONO){ // si la entrada posee el maximo de numeros de telefono
						printf("La entrada %s ya posee el maximo de numeros de telefono\n", agenda.entradas[i].nombre);
					} else { // Si todavia se pueden agregar numeros de telefono a la entrada
						cantidad_numeros = agenda.entradas[i].cantidad_numeros_telefono; // Variable auxiliar para saber en que posicion del array de numeros insertar el proximo tel
						printf("Igrese numero de telefono a agregar: ");
						gets(linea); sscanf(linea, "%d", &agenda.entradas[i].numeros_telefono[cantidad_numeros]);
						agenda.entradas[i].cantidad_numeros_telefono++; // aumento de cantidad de numeros para esa entrada en la agenda
					}
				} else { // Si no se encuentra el nombre en la agenda
					printf("Nombre no encontrado en agenda\n");
				}
				break;
			case BorrarEntrada:
				printf("Insertar nombre: ");
				gets(nombre_busqueda); // Pide el nombre para el cual se desea borrar la entrada
				for(i=0; i<agenda.cantidad_entradas; i++){ // recorre toda la agenda
					if(strcmp(agenda.entradas[i].nombre, nombre_busqueda) == 0){ // Si coincide algun nombre con esa entrada, frena la iteracion
						break; // i termina valiendo el valor de la posicion donde esta esa entrada
					}
				}
				if(i<agenda.cantidad_entradas){// i no llego al final, es porque lo encontro al nombre en la entrada i
					for(j=i; j<agenda.cantidad_entradas; j++){ // elimina la posicion j (inicialmente en i) con la de j+1 asi hasta llegar al final
						agenda.entradas[j] = agenda.entradas[j+1]; // de esta forma se pisan el valor anterior de la agenda con el que le seguia
					}
					agenda.cantidad_entradas--; // Disminuye la cantidad de entradas de la agenda
				} else { // nombre no se encontro en agenda
					printf("Nombre no encontrado en agenda\n");
				}
				break;
			case BorrarTelefono:
				printf("Insertar nombre: ");
				gets(nombre_busqueda); // Pide el nombre para el cual se desea borrar la entrada
				for(i=0; i<agenda.cantidad_entradas; i++){ // recorre toda la agenda
					if(strcmp(agenda.entradas[i].nombre, nombre_busqueda) == 0){ // Si coincide algun nombre con esa entrada, frena la iteracion
						break;  // i termina valiendo el valor de la posicion donde esta esa entrada
					}
				}
				if(i<agenda.cantidad_entradas){// i no llego al final, es porque lo encontro al nombre en la entrada i
					printf("Insertar un telefono: ");
					gets(linea); sscanf(linea, "%d", &telefono_busqueda); // Almacena el numero que se desea borrar, en una variable auxiliar
					for(j=0; j<agenda.entradas[i].cantidad_numeros_telefono; j++){ // recorre todos los numeros para esa entrada
						if(agenda.entradas[i].numeros_telefono[j] == telefono_busqueda){ // si coincide el numero, frena la iteracion y j termina valiendo la posicion del numero encontrado
							break;
						}
					}
					if(j<agenda.entradas[i].cantidad_numeros_telefono){ // si j es menor a la cantidad de numeros, es porque encontro el numero (freno la iteracion antes)
						for(h=j; h<agenda.entradas[i].cantidad_numeros_telefono; h++){ // elimina la posicion h (inicialmente en j) con la de h+1 asi hasta llegar al final
							agenda.entradas[i].numeros_telefono[h] = agenda.entradas[i].numeros_telefono[h+1]; // de esta forma se pisan el valor anterior del telefono con el que le seguia
						}
						agenda.entradas[i].cantidad_numeros_telefono--; // disminuye la cantidad de numeros de telefono para esa entrada
					} else { // Si no se encontro el telefono para dicha entrada
						printf("Telefono no encontrado para entrada %s\n", agenda.entradas[i].nombre);
					}
				} else { // Si no se encontro el nombre en ninguna entrada
					printf("Nombre no encontrado en agenda\n");
				}
				break;
			case Buscar:
				printf("Ingrese un texto: ");
				gets(nombre_busqueda); // Pide el texto a buscar
				
				for(i = 0; i<agenda.cantidad_entradas; i++){ // recorre todas las entradas
					
					// Si el largo del nombre de busqueda es menor al del actual, recorto la comparacion para que vea si coinciden los primeros caracteres
					if(strlen(nombre_busqueda) <= strlen(agenda.entradas[i].nombre)){
						/* extre solo los primeros caracteres del nombre de la entrada actual, 
						para ver si coinciden con los ingresados en el nombre_busqueda
						por ejemplo, si se ingreso el texto "Jua" y la entrada actual es "Joaquin"
						entonces el valor de nombre_actual_recortado termina siendo Joa.
						*/
						for(j = 0; j<strlen(nombre_busqueda) && j<strlen(agenda.entradas[i].nombre); j++){
							nombre_actual_recortado[j]=agenda.entradas[i].nombre[j];
						}
						nombre_actual_recortado[j]='\0';
					} else { // Sino, dejo el nombre recortado como el de la entrada actual, no va a coincidir la comparacion luego
						strcpy(nombre_actual_recortado, agenda.entradas[i].nombre);
					}
					
					// Comparo el nombre recortado contra el ingresado para ver si hay una coincidencia
					if(strcmp(nombre_actual_recortado, nombre_busqueda) == 0){
						printf("%d) %s", i+1, agenda.entradas[i].nombre); //Muestra por ejemplo 1) Agustin
						for(j=0; j<agenda.entradas[i].cantidad_numeros_telefono; j++){ // Muestra al lado de 1) Agustin, todos los telefonos que tenga cargados
							printf(" [%d]", agenda.entradas[i].numeros_telefono[j]);
						}
						printf("\n"); // Al final de 1) Agustin [15682514] [15682513] coloca un enter
					}
				}
				break;
			case Salir:
				printf("Saliendo del programa\n");
				break;
			default:
				printf("Opcion incorrecta\n");
				break;
		}
		
	} while(opcion != Salir);
	return 0;
}

