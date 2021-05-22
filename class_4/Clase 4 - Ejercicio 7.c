#include <stdio.h>
#define TAMANO 10

int main(int argc, char *argv[]) {
	int cantidad_valores_ingresados = 0; // lleva la cuenta de la cantidad de valores cargados al vector
	int valor_ingresado; // variable auxiliar para captura de valores por teclado
	int vector_numeros[TAMANO]; // vector con valores 
	int valor_encontrado = 0; // variable auxiliar para indicar si se encontro o no el valor ingresado en el vector
	
	// Mientras que la cantidad de valores ingresados aun no llegue al tamano, se sigue iterando
	while(cantidad_valores_ingresados < TAMANO){
		printf("Ingrese un valor positivo (faltan %d): ", TAMANO-cantidad_valores_ingresados);
		scanf("%d", &valor_ingresado); // almacenamos el valor en una variable auxiliar
		
		if(valor_ingresado > 0){ // si el valor ingresado es positivo
			vector_numeros[cantidad_valores_ingresados] = valor_ingresado; // lo almacenamos en la proxima posicion libre del vector
			cantidad_valores_ingresados++; // aumentamos la cantidad de valores ingresados
		}
		else // Si el numero no es positivo, mostramos un error por pantalla
			printf("Error: El valor %d no es un numero positivo\n", valor_ingresado);
	}
	
	// Al menos una vez, solicitamos un valor para hacer busqueda del mismo en el vector
	do{
		printf("Ingrese un valor para evaluar si existe en el vector (ingrese un negativo para terminar): ");
		scanf("%d", &valor_ingresado); // guardamos el valor en una variable auxiliar
		
		if(valor_ingresado < 0){ // Si el valor ingresado es negativo
			printf("Finalizando ejecucion del programa\n");
			break; // Cortamos la iteracion del do-while con un break
		} else { // Si el valor ingresado es positivo, hacemos la busqueda
			valor_encontrado = 0; // iniciamos la variable bandera como falsa (0), es decir el valor no fue encontrado
			for(int i = 0; i<TAMANO; i++){ // recorremos todo el vector
				if(vector_numeros[i] == valor_ingresado){ // si el valor de la posicion actual coincide con el valor ingresado
					valor_encontrado = 1; // seteamos la bandera como verdadera, es decir que encontramos el valor
					break; // frenamos la ejecucion del ciclo for para no seguir iterando innecesariamente (esto es para optimizar, no es obligatorio)
				}
			}
			// Una vez que hicimos la busqueda, analizamos si el valor fue encontrado, y mostramos por pantalla el mensaje correspondiente
			if(valor_encontrado){
				printf("El valor %d esta presente en el vector\n", valor_ingresado);
			} else {
				printf("El valor %d NO esta presente en el vector\n", valor_ingresado);
			}
		}
	} while(valor_ingresado >= 0); // Continuamos pidiendo valores y buscandolos en el vector siempre y cuando el usuario haya ingresado un valor positivo
	
	return 0;
}

