#ifndef PERSONAS_H
#define PERSONAS_H

#include <stdio.h>
#define MAX_NOMBRE 20
#define MAX_APELLIDO 20
#define MAX_LINEA_ARCHIVO 100
#define MAX_PERSONAS 50

struct Persona {
	char nombre[MAX_NOMBRE+1];
	char apellido[MAX_APELLIDO+1];
	int edad;
}typedef TipoPersona;

struct ListaPersonas{
	TipoPersona lista[MAX_PERSONAS];
	int cantidad_personas;
} typedef TipoListaPersonas;

void quitar_salto_de_linea(char linea[]);

void leer_persona_por_teclado(TipoPersona * persona, int cantidad_personas_cargadas);

void escribir_persona_en_archivo(TipoPersona persona, FILE * archivo);

void leer_persona_desde_archivo(TipoPersona * persona, FILE * archivo);

void imprimir_persona(TipoPersona persona);

void listar_personas_desde_archivo(char nombre_archivo[]);

void cargar_lista_personas(char nombre_archivo[], TipoListaPersonas * personas);

void agregar_persona(char nombre_archivo[], TipoListaPersonas * personas);
#endif
