#include <stdio.h>

int main(int argc, char *argv[]) {
	float PI = 3.14;
	float pi = 5.14;
	float r, resultado_const, resultado_define;
	
	printf("Ingrese radio: ");
	scanf("%f", &r);
	
	resultado_const = pi * r * r;
	resultado_define = PI * r * r;
	
	printf("Area const: %f\n", resultado_const);
	printf("Area define: %f", resultado_define);
	
	return 0;
}

