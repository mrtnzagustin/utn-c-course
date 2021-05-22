#include <stdio.h>

int main(int argc, char *argv[]) {
	/**
		numero: almacena el numero solicitado 
		ultimoNumeroGenerado: el numero que se va generando
	*/
	int numero, ultimoNumeroGenerado;
	
	// mientras no se ingrese un numero distinto de 1, se vuelve a solicitar
	do{
		printf("\nIngrese un numero entero distinto de 1: ");
		scanf("%d", &numero);
	} while(numero == 1);
	
	// inicializamos a ultimoNumeroGenerado como el numero ingresado actualmente y lo imprimimos
	ultimoNumeroGenerado = numero;
	printf("[%d] ", numero);
	do{
		// hacemos al menos una vez el calculo segun el ejercicio
		if(ultimoNumeroGenerado%2 == 0){ // si el numero es par
			ultimoNumeroGenerado = ultimoNumeroGenerado/2;
		} else { // si el numero es impar
			ultimoNumeroGenerado = ultimoNumeroGenerado * 3 + 1;
		}
		printf("[%d] ", ultimoNumeroGenerado);
	} while(ultimoNumeroGenerado != 1); // repetimos hasta que el ultimo numero generado sea 1
	
	
	return 0;
}

