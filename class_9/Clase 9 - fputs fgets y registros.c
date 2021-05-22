#include <stdio.h>
#include <string.h>

#define CANTIDAD_PERSONAS 2
#define MAX_NOMBRE 20
#define MAX_APELLIDO 20
#define MAX_LINEA_ARCHIVO 100

struct Persona {
	char nombre[MAX_NOMBRE+1];
	char apellido[MAX_APELLIDO+1];
	int edad;
}typedef TipoPersona;

void quitar_salto_de_linea(char linea[]){
	int posicion;
	for(posicion = 0; linea[posicion]!='\0'; posicion++){
		if(linea[posicion] == '\n'){
			linea[posicion] = '\0';
			break;
		}
	}
}

int main(int argc, char *argv[]) {
	FILE * archivo_personas;
	TipoPersona persona_aux;
	char nombre_archivo[] = "personas.txt";
	char linea_aux[MAX_LINEA_ARCHIVO + 1];
	int cantidad_personas_cargadas = 0, edad_aux;
	char nombre_aux[MAX_NOMBRE+1];
	char apellido_aux[MAX_APELLIDO+1];
	
	// Apertura de archivo
	archivo_personas = fopen(nombre_archivo,"w");
	// Mientras que no lleguemos al maximo de personas, seguimos solicitando
	while(cantidad_personas_cargadas < CANTIDAD_PERSONAS){
		printf("Ingrese nombre (persona %d): ", cantidad_personas_cargadas+1);
		gets(nombre_aux); // obtenemos el nombre
		printf("Ingrese apellido (persona %d): ", cantidad_personas_cargadas+1);
		gets(apellido_aux); // obtenemos el apellido
		printf("Ingrese edad (persona %d): ", cantidad_personas_cargadas+1);
		gets(linea_aux); sscanf(linea_aux, "%d", &edad_aux); // obtenemos la edad
		// Seteamos los valores para la persona en el registro
		strcpy(persona_aux.nombre, nombre_aux);
		strcpy(persona_aux.apellido, apellido_aux);
		persona_aux.edad = edad_aux;
		/* Armamos la linea final que queremos almacenar en el archivo, con el formato deseado
			y la colocamos en la cadena de texto correspondiente para luego insertarla al archivo
			FORMATO: Nombre[salto de linea]Apellido[salto de linea]Edad[salto de linea]
			EJEMPLO: Agustin\nMartinez\n30\n
		*/		
		sprintf(linea_aux, "%s\n%s\n%d\n", persona_aux.nombre, persona_aux.apellido, persona_aux.edad);
		// Luego escribimos esa linea armada con el formato deseado en el archivo
		fputs(linea_aux, archivo_personas); 	
		cantidad_personas_cargadas++;
	}
	fclose(archivo_personas); // Cerramos el archivo
	
	// Leemos el archivo y mostramos por pantalla las personas
	archivo_personas = fopen(nombre_archivo,"r"); // Abrimos el archivo
	do{
		// Leemos en el mismo orden en que escribimos con SPRINTF
		fgets(persona_aux.nombre, MAX_LINEA_ARCHIVO, archivo_personas); // Obtenemos el nombre
		quitar_salto_de_linea(persona_aux.nombre); // quitamos el salto de linea de la cadena
		fgets(persona_aux.apellido, MAX_LINEA_ARCHIVO, archivo_personas); // Obtenemos el apellido
		quitar_salto_de_linea(persona_aux.apellido); // quitamos el salto de linea de la cadena
		fscanf(archivo_personas, "%d", &persona_aux.edad); // Obtenemos la edad
		// (queda por leer un salto de linea)
		if(!feof(archivo_personas)){ // Si no llegamos al final del archivo
			// Mostramos la persona actual
			printf("Nombre: %s - Apellido: %s - Edad: %d\n", persona_aux.nombre, persona_aux.apellido, persona_aux.edad);
		}
		// Consumimos luego el salto de linea
		// para no llegar al final del archivo antes de imprimir por pantalla 
		fscanf(archivo_personas, "\n"); 
	} while(!feof(archivo_personas)); // Mientras no se llegue al final del archivo
	fclose(archivo_personas);
	
	return 0;
}

