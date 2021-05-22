#include <stdio.h>
#define TAMANO 10 // Tamano para la matriz de NXN

int main(int argc, char *argv[]) {
	int matriz[TAMANO][TAMANO];
	
	// recorremos las filas
	for(int i = 0; i<TAMANO;i++){
		// recorremos las columnas
		for(int j = 0; j<TAMANO; j++){
			if(i == j){ // si estamos en una posicion de la diagonal principal, entonces i == j
				matriz[i][j] = 1;
			} else { // Sino, almacenamos un cero
				matriz[i][j] = 0;
			}
		}
	}
	
	// recorremos las filas
	for(int i = 0; i<TAMANO;i++){
		// recorremos las columnas
		for(int j = 0; j<TAMANO; j++){
			printf(" [%d]", matriz[i][j]); // para la fila actual, mostramos pegados los valores
		}
		printf("\n"); // Una vez que mostramos todos las columnas para esa fila, ingresamos un enter
	}
	return 0;
}

