#include <stdio.h>

int main(int argc, char *argv[]) {
	int valor1, valor2, valor3, valor4, valor5, diferencia, diferenciaMenor, numeroMasCercano;

	printf("Ingrese el valor 1: ");
	scanf("%d", &valor1);
	printf("Ingrese el valor 2: ");
	scanf("%d", &valor2);
	printf("Ingrese el valor 3: ");
	scanf("%d", &valor3);
	printf("Ingrese el valor 4: ");
	scanf("%d", &valor4);
	printf("Ingrese el valor 5: ");
	scanf("%d", &valor5);
	
	diferencia = valor2 - valor1; // calculamos la diferencia al segundo numero
	if (diferencia < 0) // calculamos el valor absoluto de la diferencia
		diferencia = -diferencia;
	diferenciaMenor = diferencia; // seteamos esta diferencia como la menor
	numeroMasCercano = valor2; // seteamos el valor2 como el menor
	
	diferencia = valor3 - valor1; // calculamos la diferencia al tercer valor
	if(diferencia < 0) // calculamos el valor absoluto de la diferencia
		diferencia = -diferencia;
	if(diferencia < diferenciaMenor){ // si la diferencia es menor a la ultima calculada
		numeroMasCercano = valor3; // entonces actualizamos el numero mas cercano al valor tres
		diferenciaMenor = diferencia; // y actualizamos el valor de la menor diferencia
	}
	
	// repetimos para valor 4
	diferencia = valor4 - valor1;
	if(diferencia < 0)
		diferencia = -diferencia;
	if(diferencia < diferenciaMenor){
		numeroMasCercano = valor4;
		diferenciaMenor = diferencia;
	}
	
	// repetimos para valor 5
	diferencia = valor5 - valor1;
	if(diferencia < 0)
		diferencia = -diferencia;
	if(diferencia < diferenciaMenor){
		numeroMasCercano = valor5;
		diferenciaMenor = diferencia;
	}
	
	printf("El numero mas cercano al %d es el %d", valor1, numeroMasCercano);
		
	return 0;
}

