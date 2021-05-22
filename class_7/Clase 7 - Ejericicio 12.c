#include <stdio.h>

void minimax(int a, int b, int* min, int* max){
	if(a>b){ // Si a es mayor que b, entonces el numero mayor es a y el menor es b
		(*min) = b;
		(*max) = a;
	} else { // Sino, b es mayor que a, entonces el numero mayor es b y el menor es a
		(*min) = a;
		(*max) = b;
	}
}
int main(int argc, char *argv[]) {
	int a = 5, b = 8, min, max;
	minimax(a,b,&min,&max);
	printf("Entre %d y %d, el minimo es %d y el maximo es %d", a, b, min, max);
	return 0;
}

