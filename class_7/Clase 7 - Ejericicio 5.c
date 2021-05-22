#include <stdio.h>

int leer_entero_positivo(void){ // es lo mismo que leer_entero_positivo(void)
	int numero_leido; // variable local a la funcion
	
	// Se solicita al menos una vez
	do{
		printf("Ingrese un numero entero positivo: ");
		scanf("%d", &numero_leido);
		
		if(numero_leido<1){ // si el numero no es positivo, se muestra un error por pantalla
			printf("El numero %d no es un entero positivo\n", numero_leido);
		} else { // si es positivo, es valido, entonces se retorna dicho valor
			return numero_leido;
		}
	} while(numero_leido < 1); // se repite la solicitud mientras el valor sea invalido
	
}

int main(int argc, char *argv[]) {
	int numero;
	
	numero = leer_entero_positivo();
	printf("El numero leido es %d", numero);
	
	return 0;
}

