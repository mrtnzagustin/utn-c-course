#include <stdio.h>
#define TAMANO 10

int main(int argc, char *argv[]) {
	int vector[TAMANO], cantidad_numeros_ingresados = 0, auxiliar;
	int numero_ya_cargado;
	
	do{
		printf("Ingrese un numero [%d]: ", cantidad_numeros_ingresados+1); // Solicita el valor por pantalla
		scanf("%d", &auxiliar); // Lo almacena en una variable auxiliar
		
		// Busca si el valor ya esta cargado en el vector
		numero_ya_cargado = 0; // Pre suponemos que el numero no esta cargado, hasta que lo encontremos
		// Recorremos todas las posiciones del vector que se hayan cargado
		for(int i = 0; i<cantidad_numeros_ingresados; i++){ 
			if(vector[i] == auxiliar){ // Si la posicion actual coincide con el valor ingresado
				numero_ya_cargado = 1; // Seteamos la bandera como verdadera
				break; // frenamos la interacion
			}
		}
		// Si el numero NO fue cargado
		if(!numero_ya_cargado){
			vector[cantidad_numeros_ingresados] = auxiliar; // Cargamos el valor al vector, en la ultima posicion libre
			cantidad_numeros_ingresados++; // aumentamos la cantidad de numeros ingresados
		} else {
			printf("El numero %d ya fue cargado en el vector, intente nuevamente\n", auxiliar);
		}
		
	} while(cantidad_numeros_ingresados < 10);
	
	printf("Vector resultante: ");
	for(int i = 0; i<cantidad_numeros_ingresados; i++){
		printf(" [%d] ", vector[i]);
	}
	
	
	return 0;
}

