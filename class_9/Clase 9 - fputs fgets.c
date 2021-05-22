#include <stdio.h>
#define CANTIDAD_FRASES 4
#define MAX_LINEA_FRASE 100
#define MAX_LINEA_FRASE_ARCHIVO 120

/**
	En este ejemplo encontraran la forma mas practica de ir escribiendo y luego
	leyendo el contenido de un archivo, linea a linea
*/
int main(int argc, char *argv[]) {
	FILE * archivo_frases;
	char frase_actual[MAX_LINEA_FRASE +1];
	char frase_archivo[MAX_LINEA_FRASE_ARCHIVO + 1];
	int cantidad_frases_leidas = 0;
	
	// Apertura de archivo
	archivo_frases = fopen("frases locas.txt","w");
	
	// Mientras que no lleguemos al maximo de frases leidas, seguimos solicitando frases
	while(cantidad_frases_leidas < CANTIDAD_FRASES){
		printf("Ingrese una frase [%d de %d]: ", cantidad_frases_leidas+1, CANTIDAD_FRASES);
		gets(frase_actual); // obtenemos la frase
		/* Armamos la linea final que queremos almacenar en el archivo, con el formato deseado
			y la colocamos en la cadena de texto correspondiente
		*/
		sprintf(frase_archivo, "Frase %d: [%s]\n", cantidad_frases_leidas+1, frase_actual);
		// Luego escribimos esa frase armada con el formato deseado en el archivo
		fputs(frase_archivo, archivo_frases); 	
		cantidad_frases_leidas++;
	}
	fclose(archivo_frases); // Cerramos el archivo
	
	// Leemos el archivo y mostramos por pantalla las frases
	archivo_frases = fopen("frases locas.txt","r"); // Abrimos el archivo
	do{
		fgets(frase_archivo, MAX_LINEA_FRASE_ARCHIVO, archivo_frases); // Obtenemos la linea actual
		if(!feof(archivo_frases)){
			printf("%s", frase_archivo); // Mostramos la linea actual
		}
	} while(!feof(archivo_frases)); // Mientras no se llegue al final del archivo
	fclose(archivo_frases);
	
	return 0;
}

