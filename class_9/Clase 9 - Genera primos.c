#include <stdio.h>
#define CANTIDAD_NUMEROS_PRIMOS 1000

// Detecta si un numero es primo
int es_primo(int n)
{
	int i, divisor, es_n_primo;
	es_n_primo = 1;
	for(divisor=2; divisor<n/2; divisor++){
		if(n % divisor == 0){
			es_n_primo = 0;
			break;
		}
	}
	return es_n_primo;
}

int main(int argc, char *argv[]) {
	FILE * fp; // Declaramos la variable asociada al archivo
	int i, n;
	
	fp = fopen("primos.txt", "w"); // Abrimos el archivo en modo escritura
	i=1; // Variable para ir generando numeros posiblemente primos
	n=0; // Cuenta de numeros primos generados
	
	// Mientras no lleguemos a la CANTIDAD_NUMEROS_PRIMOS, seguimos generando
	while(n<CANTIDAD_NUMEROS_PRIMOS){
		if(es_primo(i)){ // Si el numero actual, es un numero primo
			fprintf(fp, "%d\n", i); // Escribimos el numero en el archivo y agregamos un salto de linea luego del mismo
			n++; // Aumentamos la cantidad de numeros primos generados
		}
		i++; // Prosigue con el proximo numero para evaluarlo
	}
	fclose(fp); // Cierra el archivo
	return 0;
}

