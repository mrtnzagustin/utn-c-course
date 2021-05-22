#include <stdio.h>

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
	FILE * archivo;
	int ultimo_primo;
	int numero_actual, cantidad_numeros_generados;
	
	archivo = fopen("primos.txt", "r");
	
	do{
		fscanf(archivo, "%d", &ultimo_primo);
	} while(!feof(archivo));
	printf("El ultimo primo es %d", ultimo_primo);
	
	fclose(archivo);
	
	archivo = fopen("primos.txt", "a");
	
	numero_actual = ultimo_primo + 1;
	cantidad_numeros_generados = 0;
	while(cantidad_numeros_generados <= 100){
		printf("Probando numero %d\n", numero_actual);
		if(es_primo(numero_actual)){
			printf("Es primo %d\n", numero_actual);
			fprintf(archivo, "%d\n", numero_actual);
			cantidad_numeros_generados++;
		}
		numero_actual++;
	}
	fclose(archivo);
	
	return 0;
}

