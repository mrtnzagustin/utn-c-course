#include <stdio.h>
#define MAXLON 10
int main(int argc, char *argv[]) {
	char original[MAXLON+1] = "cadena";
	char copia[MAXLON+1];
		
	for(int i = 0; i<=MAXLON; i++){
		copia[i]=original[i];
		/*if(copia[i]=='\0'){
			break; // Cortamos la iteracion
		}*/
		printf(" %d ", i);
	}
	
	return 0;
}

