#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define TAMANO_MAX 80

int main(int argc, char *argv[]) {
	char frase[TAMANO_MAX+1], frase_solo_alpha[TAMANO_MAX+1], auxiliar = 0;
	
	printf("Ingrese una frase: ");
	gets(frase);
	
	int tamano = strlen(frase);
	// para hacer mas legible el programa, usamos una variable auxiliar 
	// para almacenar el caracter actual que se esta recorriendo de la frase
	char caracter_actual;
	int caracter_ya_ingresado = 0;
	// recorre toda la cadena original
	for(int i = 0; i<tamano; i++){
		caracter_actual = frase[i];
		caracter_ya_ingresado = 0; // reinicializamos la bandera para ver si el caracter actual esta ya copiado a la frase resultante
		if(isalpha(caracter_actual)){ // si el caracter actual de la cadena, es una letra
			for(int j = 0; j<auxiliar; j++) // recorremos la cadena resultante
				if(frase_solo_alpha[j] == caracter_actual){ // si encontramos que ya existe el caracter
					caracter_ya_ingresado = 1; // seteamos la bandera como verdadera (1)
					break; // frenamos la iteracion
				}
			if(!caracter_ya_ingresado) // si el caracter aun no fue ingresado
				frase_solo_alpha[auxiliar++] = caracter_actual; // la copia a la frase resultante, en la posicion que corresponde
		}
	}
	
	// Agrega el caracter de terminacion
	frase_solo_alpha[auxiliar]='\0';
	
	printf("Frase resultante: %s", frase_solo_alpha);
	
	return 0;
}

