#include <stdio.h>

int main(int argc, char *argv[]) {
	int a = 1, i = 1;
	
	a = ++i;
	printf("El valor de a es %d y el de i es %d", a, i);
	
	return 0;
}

