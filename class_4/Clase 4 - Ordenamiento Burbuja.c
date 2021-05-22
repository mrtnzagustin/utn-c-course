#include <stdio.h>
#define TAMANO 5

int main(int argc, char *argv[]) {
	int vector[TAMANO] = {2, 26, 4, 3 , 1};
	int aux;
	
	for(int i = 0; i<TAMANO; i++)
		printf("%d ", vector[i]);
	
	for(int i = 0; i<TAMANO-1; i++){ // Las n-1 pasadas que estuvimos realizando
		/** En cada una de esas pasadas, debo comparar
		todos las posiciones del vector, de a dos
		pero siempre tengo que ir comparando una posicion menos
		es decir a medida que van aumentando las pasadas (que voy haciendo con i)
		tengo que ir restando una posicion a comparar
			cuando i valga 0, voy a comparar hasta el final
			cuando i valga 1, voy a comparar hasta el final - 1
			cuando i valga 2, voy a comparar hasta el final - 2
			cuando i valga 3, voy a compara hasta el final - 3
		es decir que por cada pasada, necesito hacer comparaciones 
		que van a ir desde desde la posicion 0 hasta n - i
		por lo tanto necesito otra que me sirva de guia para cada
		sub-pasada, usaremos j */
		for(int j = 0; j<TAMANO-i; j++){ // finalmente para hacer comparar cada valor del vector, uso j
			/*
			El valor de j tomara los valores:
				- cuando i valga 0
					j tomara los valores 0,1,2,3 y 4
				- cuando i valga 1
					j tomara los valores 0,1,2 y 3
				- asi hasta unicamente tomar el valor 0
			*/
			if(vector[j] > vector[j+1]){ // Comparamos si la posicion j, es mayor a j+1
				/* Si la posicion j, es mayor a la siguiente, debemos reemplazar
				para esto necesitamos una variable auxiliar */
				aux = vector[j]; 
				vector[j] = vector[j+1]; /** IMPORTANTE: ¡¡Si no tuviera la variable auxiliar, aqui perderia por completo el valor de vector[j]!! */
				vector[j+1] = aux;					
			}
		}
	}
	printf("\n");
	for(int i = 0; i<TAMANO; i++)
		printf("%d ", vector[i]);
		
	return 0;
}

