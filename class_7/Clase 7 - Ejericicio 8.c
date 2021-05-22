#include <stdio.h>
#define TAMANO 10

int mostrar_vector_por_pantalla(int vector[], int tamano){
	for(int i = 0; i<tamano; i++){
		printf("%d", vector[i]);
		if(i != tamano - 1) // Solo imprime la coma, si no estamos en el ultimo elemento (tamano - 1 )
			printf(", ");
	}
	printf("\n"); // Al final imprimimos el salto de linea
}
	
int main(int argc, char *argv[]) {
	int vector[TAMANO] = {11,981,1254,1,32,5,7,8,90,150};
	
	mostrar_vector_por_pantalla(vector, TAMANO);
	
	return 0;
}

	
