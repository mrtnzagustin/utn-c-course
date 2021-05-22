#include <stdio.h>
/*
	Escribir un programa que para la ecuación de una recta y = ax+b, 
	calcule su raíz y la muestre por pantalla. Manejar a y b como variables del programa.
	Ejemplo para a = 3 y b = 6  x = -2, debe mostrar “La raíz para a(3) y b(6) es -2”

*/
int main(int argc, char *argv[]) {
	int a, b, raiz;
	
	printf("Ingrese el valor para a (y=ax+b): ");
	scanf("%d", &a);
	printf("Ingrese el valor para b (y=ax+b): ");
	scanf("%d", &b);
	
	raiz = - b / a;
	
	printf("La raiz para a(%d) y b(%d) es %d", a, b, raiz);
	return 0;
}

