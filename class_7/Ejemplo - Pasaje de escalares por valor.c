#include <stdio.h>

void incrementarDos (int numero){
	numero = numero + 2;
	printf("Valor dentro de la funcion: %d\n", numero);
	return;
}
int main(int argc, char *argv[]) {
	int numero_main = 4;
	printf("Valor antes del llamado: %d\n", numero_main);
	incrementarDos(numero_main);
	printf("Valor despues del llamado: %d\n", numero_main);
	return 0;
}

