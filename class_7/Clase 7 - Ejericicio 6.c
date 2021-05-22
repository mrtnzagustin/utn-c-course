#include <stdio.h>
#define TAMANO 10

int valor_maximo(int vector[], int tamano){
	int maximo = vector [0]; // asumimos que el maximo es el primer valor
	
	// recorremos los valores restantes del vector
	for(int i = 1; i<tamano; i++){
		if(vector[i] > maximo){// si el valor actual es mayor al maximo, actualizamos el maximo
			maximo = vector[i];
		}
	}
	// al final retornamos el valor maximo
	return maximo;
}

int main(int argc, char *argv[]) {
	int vector[TAMANO] = {11,981,1254,1,32,5,7,8,90,150};
	
	printf("El valor maximo del vector es: %d",valor_maximo(vector, TAMANO));
	
	return 0;
}

