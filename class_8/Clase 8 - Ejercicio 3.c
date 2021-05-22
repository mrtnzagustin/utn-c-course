#include <stdio.h>
int cantidad_de_digitos(int numero){
	if(numero / 10 == 0){ // Si divido un numero un solo digito por 10, su valor redondeado siempre sera 0 y en ese caso se que es un solo digito
		return 1;
	} else { // Si un numero dividido 10 me da diferente de 0 (el numero es mayor o igual a 10) entonces debo contar este digito y ver cuantos me restan
		return 1 + cantidad_de_digitos(numero/10); // Para analizar la parte faltante, corro la coma una posicion y me quedo con la parte entera, basta con dividir por 10 y quedarse con el redondeo
	}
}

int main(int argc, char *argv[]) {
	int numero;
	printf("Ingrese un numero: ");
	scanf("%d", &numero);
	printf("La cantidad de digitos del numero %d es: %d", numero, cantidad_de_digitos(numero));
	return 0;
}

