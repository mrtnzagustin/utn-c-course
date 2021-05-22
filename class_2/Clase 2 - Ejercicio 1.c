#include <stdio.h>

/*
	Escribir un programa que declare una variable del tipo char, 
	otra del tipo int y otra del tipo float y mostrarlas por pantalla con el siguiente formato:
	Salida -> Valor entero [000450] – Valor real [0045.54] – Valor char [k]
*/
int main(int argc, char *argv[]) {
	int entero = 450;
	float real = 45.54;
	char caracter = 'k';
	
	printf("Ingrese el valor un entero: ");
	scanf("%d", &entero);
	
	printf("Ingreso el valor de un real: ");
	scanf("%f", &real);
	
	printf("Ingrese un caracter: ");
	scanf(" %c", &caracter);
	
	
	printf("Valor entero [%06d] - Valor real [%07.2f] - Valor char [%c]", entero, real, caracter);
	return 0;
}

