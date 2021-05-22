#include <stdio.h>

int main(int argc, char *argv[]) {
	int n, m;
	float suma;
	
	do{
		printf("\nIngrese el valor de n (mayor a cero): ");
		scanf("%d", &n);
	}while(n <= 0);// se sigue solicitando el valor de n mientras sea menor o igual que cero (mientras no sea positivo)
	
	do{
		printf("\nIngrese el valor de m (mayor o igual que %d): ", n);
		scanf("%d", &m);
	} while(m < n); // se sigue solicitando el valor de m mientras sea menor que n
	
	// i comienza valiendo n y va incrementando hasta llegar al valor de m (inclusive, usando <=)
	// observar que se puede declarar la variable i dentro del for
	for(int i = n; i<=m; i++){
		suma += 1/(float)i;
	}
	
	printf("El resultado de la sumatoria es %f", suma);	
	
	
	return 0;
}

