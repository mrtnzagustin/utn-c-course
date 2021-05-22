#include <stdio.h>

/*
	Escribir un programa que declare una variable del tipo char, 
	otra del tipo int y otra del tipo float y mostrarlas por pantalla con el siguiente formato:
	Salida -> Valor entero [000450] – Valor real [0045.54] – Valor char [k]
*/
int main(int argc, char *argv[]) {
	int entero;
	float real;
	char caracter1, character2, character3;
	
	printf("Ingrese el valor de un valor entero: ");
	scanf("%d", &entero);
	printf("\nIngrese el valor de un numero real: ");
	scanf("%f", &real);
	/*
		CUIDADO: %d lee enteros, por lo que evita caracteres especiales como el "enter". 
		Por eso podemos poner el enter y no hay problemas con dos lecturas seguidas por ejemplo.
		Para evitar este problema, dejamos un espacio por delante de la marca de formato, en el uso de scanf.
	*/
	printf("\nIngrese el valor de un numero caracter: ");
	scanf(" %c", &caracter);

	
	printf("Valor entero [%06d] - Valor real [%07.2f] - Valor char [%c]", entero, real, caracter);
	return 0;
}

