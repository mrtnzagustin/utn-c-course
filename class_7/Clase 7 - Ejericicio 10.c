#include <stdio.h>
#define TAMANO 4

void inicializar_vector(int vector[], int tamano, int valor){
	for(int i = 0; i<tamano; i++){
		vector[i] = valor;
	}
}
	
int mostrar_vector_por_pantalla(int vector[], int tamano){
	for(int i = 0; i<tamano; i++){
		printf("%d", vector[i]);
		if(i != tamano - 1) // Solo imprime la coma, si no estamos en el ultimo elemento (tamano - 1 )
			printf(", ");
	}
	printf("\n"); // Al final imprimimos el salto de linea
}

int main(int argc, char *argv[]) {
	int vector[TAMANO];
	
	inicializar_vector(vector, TAMANO, 58);
	// al pasar por referencia, cuando editamos sus valores, quedan almacenados y se modifica el vector original
	mostrar_vector_por_pantalla(vector, TAMANO);
	
	return 0;
}

