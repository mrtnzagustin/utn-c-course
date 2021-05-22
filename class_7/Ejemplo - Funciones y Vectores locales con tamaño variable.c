#include <stdio.h>

void mostrarNumerosDesdeHasta(int desde, int hasta){
	int numeros[hasta-desde];
	
	for(int i = 0; i<=hasta-desde; i++){
		numeros[i] = i + desde;
	}
	
	printf("La talla del vector definido fue de %d\n", hasta-desde);
}
int main(int argc, char *argv[]) {
	mostrarNumerosDesdeHasta(50, 100);
	mostrarNumerosDesdeHasta(120, 150);
	return 0;
}

