#include <stdio.h>

int main(int argc, char *argv[]) {
	int numeroEntero;
	printf("Ingrese un numero entero: ");
	scanf("%d", &numeroEntero);
	
	if(numeroEntero % 2 == 0 && (numeroEntero/2) % 2 != 0){
		printf("El numero ingresado [%d] es el doble del numero impar [%d]", numeroEntero, numeroEntero/2);
	} else {
		printf("El numero ingresado [%d] no es el doble de un numero ipar", numeroEntero);
	}
	
	return 0;
}

