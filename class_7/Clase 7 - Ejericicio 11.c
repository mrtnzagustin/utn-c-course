#include <stdio.h>
#define TAMANO 4

void asignar_suma(int vector[], int tamano, int * sumatoria){
	(*sumatoria) = 0; // inicializamos la sumatoria en 0
	for(int i = 0; i<tamano; i++) 
		(*sumatoria) += vector[i]; // vamos incrementando sumatoria con cada valor del vector
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
	int vector[TAMANO] = {1,2,3,4};
	int suma;
	asignar_suma(vector, TAMANO, &suma);
	// al pasar por referencia, cuando editamos sus valores, quedan almacenados y se modifica el vector original
	mostrar_vector_por_pantalla(vector, TAMANO);
	printf("La suma de todos los elementos es: %d", suma);
	
	return 0;
}

