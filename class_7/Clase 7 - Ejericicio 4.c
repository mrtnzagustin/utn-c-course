#include <stdio.h>
#include <ctype.h>

char mayuscula(char letra){
	if(islower(letra)) // Si la letra esta en minuscula
		return toupper(letra); // retornamos su transformacion a mayuscula
	else
		return letra; // sino retornamos la letra como está
}
int main(int argc, char *argv[]) {
	char letra;
	
	printf("Ingrese una letra: ");
	scanf(" %c", &letra);
	printf("La mayuscula de la letra %c es %c", letra, mayuscula(letra));
	
	return 0;
}

