#include <stdio.h>

int main(int argc, char *argv[]) {
	float a, b, x;
	
	printf("Ingrese el valor de a: ");
	scanf("%f", &a);
	printf("Ingrese el valor de b: ");
	scanf("%f", &b);
	
	if(a != 0){
		x = -b / a;
		printf("La solucion es %f", x);
	} else { // a == 0
		if (b != 0) {
			printf("La ecuacion no tiene solucion");
		} else { // b == 0
			printf("La ecuacion tiene infinitas soluciones");
		}
	}
	
	return 0;
}

