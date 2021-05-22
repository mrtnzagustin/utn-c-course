#include <stdio.h>
#define TAMANO 3 // Tamano para la matriz de NXN

int main(int argc, char *argv[]) {
	int matriz[TAMANO][TAMANO], es_matriz_identidad = 1;
	
	// recorremos las filas
	for(int i = 0; i<TAMANO;i++){
		// recorremos las columnas
		for(int j = 0; j<TAMANO; j++){
			printf("Ingrese el valor para la fila %d y la columna %d: ", i, j);
			scanf("%d", &matriz[i][j]);
		}
	}
	
	// recorremos las filas
	for(int i = 0; i<TAMANO;i++){
		// recorremos las columnas
		for(int j = 0; j<TAMANO; j++){
			printf("\t[%d]", matriz[i][j]); // para la fila actual, mostramos los valores separados por una tabulacion \t
		}
		printf("\n"); // Una vez que mostramos todos las columnas para esa fila, ingresamos un enter
	}
	
	// recorremos las filas
	for(int i = 0; i<TAMANO;i++){
		// recorremos las columnas
		for(int j = 0; j<TAMANO; j++){
			if((i == j && matriz[i][j] != 1) || // si en la diagonal encuentro un valor diferente de 1
				(i != j && matriz[i][j] != 0)){ // si en cualquier posicion por encima o por debajo de la diagonal principal es diferente de 0
				es_matriz_identidad = 0;
			}
		}
	}
	
	if(es_matriz_identidad)
		printf("La matriz es una matriz identidad");
	else
		printf("La matriz NO es una matriz identidad");
	
	return 0;
}

