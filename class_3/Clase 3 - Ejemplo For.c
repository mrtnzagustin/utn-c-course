#include <stdio.h>

int main(int argc, char *argv[]) {
	int i;
	
	// El valor de i, inicia en 1 y se va incrementando
	// cuando su valor llega a 11, 
	// la condicion no se cumple (resultado falso)
	// y la iteracion finaliza
	for(i=1; i<=10; i++){
		printf("%d\n", i);
	}
	
	// Su equivalente en un while
	i=1; // instruccion inicial
	while(i<=10){ // condicion
		// inicio de sentencias for
		printf("%d\n", i);
		// fin de sentencias for
		i++; // instruccion de incremento
	}
	return 0;
}

