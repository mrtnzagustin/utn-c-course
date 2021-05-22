#include <stdio.h>
#define TAMANO 10

int son_iguales(int vector_uno[], int vector_dos[], int tamano){
	int son_iguales = 1; // de entrada asumimos que los dos vectores son iguales
	
	// recorremos los valores
	for(int i = 0; i<tamano; i++){
		if(vector_uno[i] != vector_dos[i]){// si encontramos una posicion diferente, entonces no son iguales
			son_iguales = 0;
			break;
		}
	}
	// al final retornamos si son iguales o no
	return son_iguales;
}

int main(int argc, char *argv[]) {
	int vector[TAMANO] = {11,981,1254,1,32,5,7,8,90,150};
	int otro_vector[TAMANO] = {11,981,1254,1,32,5,7,99,90,150};
	
	if(son_iguales(vector, otro_vector, TAMANO)){
		printf("Los vectores son iguales");
	} else {
			printf("Los vectores NO son iguales");
	}
	
	return 0;
}

