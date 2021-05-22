#include <stdio.h>

int fibonacci(int orden){
	if(orden == 1 || orden == 2){ // Los dos primeros numeros de fibonacci son 1, 1
		return 1;
	} else {
		return fibonacci(orden-1)+fibonacci(orden-2); // fibonacci en una posicion es el fibonacci en posicion-1 mas el fibonacci en posicion-2
	}
}

int main(int argc, char *argv[]) {
	
	for(int i = 0; i<10; i++){
		printf(" [%d] ", fibonacci(i+1));
	}
	
	return 0;
}

