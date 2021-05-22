#include <stdio.h>

int main(int argc, char *argv[]) {
	int numeroUno, numeroDos, maximoComunDivisor;
	
	do{
		printf("\nIngrese el valor del primer numero (mayor a cero): ");
		scanf("%d", &numeroUno);
	}while(numeroUno <= 0);// se sigue solicitando el valor  mientras sea menor o igual que cero (mientras no sea positivo)
	
	do{
		printf("\nIngrese el valor del segundo numero (mayor a cero): ");
		scanf("%d", &numeroDos);
	}while(numeroDos <= 0);// se sigue solicitando el valor  mientras sea menor o igual que cero (mientras no sea positivo)
	
	if(numeroDos > numeroUno){
		for(int divisor = numeroUno; divisor > 0; divisor--){
			if(numeroUno % divisor == 0 && numeroDos % divisor == 0){
				maximoComunDivisor = divisor;
				break;
			}
		}
	} else {
		for(int divisor = numeroDos; divisor > 0; divisor--){
			if(numeroUno % divisor == 0 && numeroDos % divisor == 0){
				maximoComunDivisor = divisor;
				break;
			}
		}
	}
	
	printf("El maximo comun divisor de %d y %d, es: %d", numeroUno, numeroDos, maximoComunDivisor);
	
	return 0;
}

