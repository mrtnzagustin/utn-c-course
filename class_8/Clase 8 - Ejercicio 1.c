#include <stdio.h>

float potenciacion(float base, int exponente){
	if(exponente == 0){
		return 1;
	} else if(exponente == 1){
		return base;
	} else {
		return base * potenciacion(base, exponente-1);
	}
}

int main(int argc, char *argv[]) {
	float base;
	int exponente;
	printf("Ingresar base: ");
	scanf("%f", &base);
	printf("Ingresar exponente: ");
	scanf("%d", &exponente);
	printf("El valor %f, elevado a la %d, es %f", base, exponente, potenciacion(base,exponente));
	return 0;
}

