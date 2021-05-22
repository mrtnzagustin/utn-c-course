#include <stdio.h>

int main(int argc, char *argv[]) {
	int a, b;
	a = 0;
	b = a + 8;
	
	printf("Dirección de a: %d\n", &a);
	printf("Dirección de b: %d", &b);
	
	return 0;
}

