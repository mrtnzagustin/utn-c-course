#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define TAMANO_MAX 1000
#define OFFSET_ABC 65
#define TAMANO_ABC 26 // Tamaño del abcedario ingles

/**
	Las letras de la A (65) hasta la Z (90) se representan por los
	numeros 65, 66, 67 ... 90 (es decir 26 letras con sus respectivos enteros)
	entonces, en un vector de 26 posiciones podemos 
		usar la posicion 0 para representar la cantidad de apariciones de la letra representada por valor 65 (A)
		usar la posicion 1 para representar la cantidad de apariciones de la letra representada por valor 66 (B)
		...
		usar la posicion 25 para representar la cantidad de apariciones de la letra representada por valor 90 (B)
	es decir que apariciones_alpha[caracter - 26] nos da la cuenta de apariciones para el caracter indicado
*/

/**
	Una solucion menos optima pero valida, seria representar los char de los 255 valores de la tabla ASCII con un vector de 255 posiciones
	de esa forma cada contador seria directamente apariciones_alpha[caracter] sin restar el offset
	en ese caso estariamos utilizando solo 26 posicionesd de ese vector
*/

int main(int argc, char *argv[]) {
	char frase[TAMANO_MAX+1];
	int apariciones_alpha[TAMANO_ABC];
	
	// inicializamos la cuenta de cada letra en 0
	for(int i = 0; i<TAMANO_ABC; i++){
		apariciones_alpha[i] = 0;
	}
	
	printf("Ingrese una frase: ");
	gets(frase);
	
	int tamano = strlen(frase);
	// para hacer mas legible el programa, usamos una variable auxiliar 
	// para almacenar el caracter actual que se esta recorriendo de la frase
	char caracter_actual;
	// recorre toda la cadena original
	for(int i = 0; i<tamano; i++){
		caracter_actual = frase[i];	
		if(isalpha(caracter_actual)){ // si el caracter actual es una letra
			caracter_actual = toupper(caracter_actual);// lo pasamos a mayusculas, para evitar diferenciar entre 'a' y 'A', etc
			apariciones_alpha[caracter_actual-OFFSET_ABC]++; // aumentamos el contador del caracter correspondiente (lo usamos como entero)
			// prestar atencion a que la posicion es = caracter_actual (por ejemplo 65 para 'A' ) menos OFFSET_ABC (65) = 0
		}
	}
	printf("APARICION DE LETRAS\n");
	// esto es mas visual, pero es equivalente a hacer for(int i = 65; i<=90; i++)
	for(int i = 'A'; i<='Z'; i++){
		printf("[%c] = %d\n",i, apariciones_alpha[i-OFFSET_ABC]);
	}
	
	return 0;
}

