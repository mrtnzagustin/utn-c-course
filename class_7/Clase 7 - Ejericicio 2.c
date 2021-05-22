#include <stdio.h>
#include <math.h>

float volumen_esfera(float radio){
	return (4/(float)3) * 3 * M_PI * pow(radio, 3);
}

int main(int argc, char *argv[]) {
	float radio = 5.0;
	
	printf("El volumen de una esfera de radio %f es %f", radio, volumen_esfera(radio));
	
	return 0;
}

