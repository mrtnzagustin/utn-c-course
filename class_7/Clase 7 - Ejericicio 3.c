#include <stdio.h>
#include <math.h>

float distancia_punto_a_recta(float a, float b, float c, float x, float y){
	return (a*x+b*y+c)/(sqrt(pow(a,2) + pow(b,2)));
}

int main(int argc, char *argv[]) {
	float a=2.0, b=4.2, c=1.5, x0=5.2, y0=6.3;
	
	printf("La distancia del punto (%4.2f,%4.2f) a la recta %4.2f*x + %4.2f*y + %4.2f = 0 es %8.2f", x0, y0, a, b, c, distancia_punto_a_recta(a, b, c, x0, y0));
	
	return 0;
}

