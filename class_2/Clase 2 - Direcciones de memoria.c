#include <stdio.h>

int main(int argc, char *argv[]) {
	int a, b;
	a = 0;
	b = a + 8;
	
	printf("Direcci�n de a: %d\n", &a);
	printf("Direcci�n de b: %d", &b);
	
	return 0;
}

