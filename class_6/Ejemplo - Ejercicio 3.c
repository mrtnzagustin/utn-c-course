#include <stdio.h>
#define TAMANO 3 // Tamano para la matriz de NXN

int main(int argc, char *argv[]) {
	int matriz[TAMANO][TAMANO], matriz_producto[TAMANO][TAMANO], factor;
	
	// recorremos las filas
	for(int i = 0; i<TAMANO;i++){
		// recorremos las columnas
		for(int j = 0; j<TAMANO; j++){
			printf("Ingrese el valor para la fila %d y la columna %d: ", i, j);
			scanf("%d", &matriz[i][j]);
		}
	}
	
	printf("Ingrese el valor por el cual multiplicar la matriz: ");
	scanf("%d", &factor);
	
	// Mostramos la matriz cargada
	// recorremos las filas
	for(int i = 0; i<TAMANO;i++){
		// recorremos las columnas
		for(int j = 0; j<TAMANO; j++){
			printf("\t[%d]", matriz[i][j]); // para la fila actual, mostramos los valores separados por una tabulacion \t
		}
		printf("\n"); // Una vez que mostramos todos las columnas para esa fila, ingresamos un enter
	}
	
	// Calculamos la multiplicacion
	// recorremos las filas
	for(int i = 0; i<TAMANO;i++){
		// recorremos las columnas
		for(int j = 0; j<TAMANO; j++){
			matriz_producto[i][j] = matriz[i][j] * factor;
		}
	}
	
	// Mostramos la matriz calculada
	// recorremos las filas
	printf("Matriz multiplicada por %d\n", factor);
	for(int i = 0; i<TAMANO;i++){
		// recorremos las columnas
		for(int j = 0; j<TAMANO; j++){
			printf("\t[%d]", matriz_producto[i][j]); // para la fila actual, mostramos los valores separados por una tabulacion \t
		}
		printf("\n"); // Una vez que mostramos todos las columnas para esa fila, ingresamos un enter
	}
	
	
	
	return 0;
}

