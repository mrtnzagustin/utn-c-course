#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]) {
	float a, b, c, x, x1, x2, disc;
	
	printf("Ingrese el valor de a: ");
	scanf("%f", &a);
	printf("Ingrese el valor de b: ");
	scanf("%f", &b);
	printf("Ingrese el valor de c: ");
	scanf("%f", &c);
	
	disc = pow(b,2) - 4*a*c;
	
	if(a != 0){
		if(disc < 0){
			printf("La ecuacion no tiene soluciones reales");
		} else if (disc == 0){ // una unica solucion
			x = - b / (2*a);
			printf("Solucion de la ecuacion es x [%f]", x);
		} else {
			x1 = (- b + sqrt(disc)) / (2*a);
			x2 = (- b - sqrt(disc)) / (2*a);
			printf("Las soluciones son x1 [%f] y x2 [%f]", x1, x2);
		}
	} else { // a == 0
		if (b != 0) {
			x = -c / b;
			printf("Solucion de la ecuacion es x [%f]", x);
		} else { // b == 0
			if (c != 0){
				printf("La ecuacion no tiene solucion");
			} else { // c == 0
				printf("La ecuacion tiene infinitas soluciones");
			}
		}
	}
	
	return 0;
}

