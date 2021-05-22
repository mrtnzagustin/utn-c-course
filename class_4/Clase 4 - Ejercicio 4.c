#include <stdio.h>
#define TAMANO 100

int main(int argc, char *argv[]) {
	int numeros_primos[TAMANO]; // vector con numeros primos almacenados
	int cantidad_numeros_primos_generados = 0; // cantidad generada total de numeros primos
	int numero_a_probar = 1; // el numero que se va a probar para evaluar si es primo
	int cantidad_divisores = 0; // Para almacenar la cantidad de divisores que tiene cada numero que se va probando
	
	// Bucle/iteracion de generacion de numeros primos
	// Mientras que la cantidad de numeros primos generados no llegue al tamano propuesto, sigo generado
	while(cantidad_numeros_primos_generados < TAMANO){
		// inicializo la cantidad de divisores para el numero actual en 0
		cantidad_divisores = 0;
		// itero desde el numero actual, hasta que i valga 1, en un for que vaya decrementando
		// este for recorre todos los numeros menores que "numero a probar" e evalua si el mismo es divisible
		for(int i = numero_a_probar; i >= 1; i--){
			// si el numero a probar es divisible por i
			if(numero_a_probar % i == 0){
				cantidad_divisores++; // entonces contabilizo a i como un divisor de numero a probar
			}
		}
		// Luego de recorrer, evaluo si el numero a a probar fue divisible solo por dos numeros
		if(cantidad_divisores == 2){
			numeros_primos[cantidad_numeros_primos_generados] = numero_a_probar; // agrego al vector el numero a probar como un numero primo
			cantidad_numeros_primos_generados++; // aumento la cantidad de numeros primos generados
		} 
		numero_a_probar++; // indistintamente si el numero a probar era primo o no, prosigo con el siguiente numero a probar
	}
	
	// Muestra por pantalla los numeros primos generados
	for(int i = 0; i<TAMANO; i++){
		printf(" [%d] ", numeros_primos[i]);
	}
	return 0;
}

