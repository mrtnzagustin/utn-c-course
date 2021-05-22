#include <stdio.h>
#define TAMANO 5

int main(int argc, char *argv[]) {
	int original[TAMANO] = {1, 2, 3 , 4 , 5}, i, copia[TAMANO];
	int otro_vector[TAMANO] = {1, 6, 3 , 4 , 5};
	int son_iguales;
	
	// Se copia elemento por elemento
	for(i=0; i<TAMANO; i++){
		copia[i] = original[i];
	}
	
	// Se inicia suponiendo que los dos vectores son iguales
	// de esta forma, con encontrar un solo elemento que sea diferente,
	// ya podemos decir que los dos son diferentes
	son_iguales = 1;
	for(i=0; i<TAMANO; i++){
		if(original[i] != otro_vector[i]){
			son_iguales = 0;
			break; // cortamos la iteracion, ya que encontramos una diferencia
		}
	}
	
	if(son_iguales){
		printf("Los vectores son iguales\n");
	} else {
		printf("Los vectores NO son iguales\n");
	}
	
	
	
	return 0;
}

