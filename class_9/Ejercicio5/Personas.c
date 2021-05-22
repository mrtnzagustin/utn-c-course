#include "Personas.h"

void quitar_salto_de_linea(char linea[]){
	int posicion;
	for(posicion = 0; linea[posicion]!='\0'; posicion++){
		if(linea[posicion] == '\n'){
			linea[posicion] = '\0';
			break;
		}
	}
}
void leer_persona_por_teclado(TipoPersona * persona, int cantidad_personas_cargadas)
{
	char linea_aux[MAX_LINEA_ARCHIVO + 1];
	
	printf("Ingrese nombre (persona %d): ", cantidad_personas_cargadas+1);
	gets(persona->nombre); // obtenemos el nombre
	printf("Ingrese apellido (persona %d): ", cantidad_personas_cargadas+1);
	gets(persona->apellido); // obtenemos el apellido
	printf("Ingrese edad (persona %d): ", cantidad_personas_cargadas+1);
	gets(linea_aux); sscanf(linea_aux, "%d", &persona->edad); // obtenemos la edad
}

void escribir_persona_en_archivo(TipoPersona persona, FILE * archivo)
{
	char linea_aux[MAX_LINEA_ARCHIVO + 1];
	
	// EJEMPLO: Agustin\nMartinez\n30\n		
	sprintf(linea_aux, "%s\n%s\n%d\n", persona.nombre, persona.apellido, persona.edad);
	// Escrinimos esa linea en el archivo
	fputs(linea_aux, archivo);
}

void leer_persona_desde_archivo(TipoPersona * persona, FILE * archivo)
{
	// Leemos en el mismo orden en que escribimos con SPRINTF
	fgets(persona->nombre, MAX_LINEA_ARCHIVO, archivo); // Obtenemos el nombre
	quitar_salto_de_linea(persona->nombre); // quitamos el salto de linea de la cadena
	fgets(persona->apellido, MAX_LINEA_ARCHIVO, archivo); // Obtenemos el apellido
	quitar_salto_de_linea(persona->apellido); // quitamos el salto de linea de la cadena
	fscanf(archivo, "%d", &persona->edad); // Obtenemos la edad
}

void imprimir_persona(TipoPersona persona)
{
	printf("Nombre: %s - Apellido: %s - Edad: %d\n", persona.nombre, persona.apellido, persona.edad);
}

void listar_personas_desde_archivo(char nombre_archivo[])
{
	TipoPersona persona_aux;
	FILE * archivo_personas;
	
	// Leemos el archivo y mostramos por pantalla las personas
	archivo_personas = fopen(nombre_archivo,"r"); // Abrimos el archivo
	do{
		leer_persona_desde_archivo(&persona_aux, archivo_personas);
		// (queda por leer un salto de linea)
		if(!feof(archivo_personas)){ // Si no llegamos al final del archivo
			// Mostramos la persona actual
			imprimir_persona(persona_aux);
		}
		// Consumimos luego el salto de linea para no llegar al final del archivo antes de imprimir por pantalla 
		fscanf(archivo_personas, "\n"); 
	} while(!feof(archivo_personas)); // Mientras no se llegue al final del archivo
	fclose(archivo_personas);
}

void cargar_lista_personas(char nombre_archivo[], TipoListaPersonas * personas){
	TipoPersona persona_aux;
	FILE * archivo_personas;
	
	personas->cantidad_personas = 0;
	// Leemos el archivo y mostramos por pantalla las personas
	archivo_personas = fopen(nombre_archivo,"r"); // Abrimos el archivo
	do{
		leer_persona_desde_archivo(&persona_aux, archivo_personas);
		// (queda por leer un salto de linea)
		if(!feof(archivo_personas)){ // Si no llegamos al final del archivo
			personas->lista[personas->cantidad_personas++] = persona_aux;
		}
		// Consumimos luego el salto de linea para no llegar al final del archivo antes de imprimir por pantalla 
		fscanf(archivo_personas, "\n"); 
	} while(!feof(archivo_personas)); // Mientras no se llegue al final del archivo
	fclose(archivo_personas);
}
	
void agregar_persona(char nombre_archivo[], TipoListaPersonas * personas)
{
	TipoPersona persona_aux;
	FILE * archivo_personas;
	// Leemos los datos de una persona
	leer_persona_por_teclado(&persona_aux, personas->cantidad_personas);
	// Abrimos el archivo en modo adicion
	archivo_personas = fopen(nombre_archivo,"a"); // Abrimos el archivo en modo adicion
	// escribimos los datos de la persona en el archivo
	escribir_persona_en_archivo(persona_aux, archivo_personas);
	// Cerramos el archivo
	fclose(archivo_personas);
	// agregamos la persona a la lista
	personas->lista[personas->cantidad_personas] = persona_aux;
	personas->cantidad_personas++;
}
	
