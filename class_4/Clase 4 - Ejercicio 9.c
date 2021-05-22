#include <stdio.h>

#define TAMANO 10
#define VALOR_MINIMO 10
#define VALOR_MAXIMO 25

int main(int argc, char *argv[]) {
	int vector_uno[TAMANO], vector_dos[TAMANO], valor_ingresado, cantidad_valores_ingresados = 0, son_iguales;
	
	// ciclo de carga de valores para el vector uno
	do{
		printf("Ingrese el valor [%d] para el primer vector (entre %d y %d): ", cantidad_valores_ingresados+1, VALOR_MINIMO, VALOR_MAXIMO);
		scanf("%d", &valor_ingresado);
		
		// Solo cargamos el valor al vector si respeta el minimo y el maximo establecido
		if(valor_ingresado >= VALOR_MINIMO && valor_ingresado <= VALOR_MAXIMO){
			vector_uno[cantidad_valores_ingresados] = valor_ingresado;
			cantidad_valores_ingresados++;
		} else { // sino mostramos un error y contiuamos
			printf("ERROR: El valor %d no respeta el minimo y el maximo establecido.\n", valor_ingresado);
		}
			
	} while(cantidad_valores_ingresados < TAMANO);
	
	// ciclo de carga de valores para el vector uno
	cantidad_valores_ingresados = 0; // reiniciamos la variable auxiliar que nos permite llevar la cuenta de valores cargados
	do{
		printf("Ingrese el valor [%d] para el segundo vector (entre %d y %d): ", cantidad_valores_ingresados+1, VALOR_MINIMO, VALOR_MAXIMO);
		scanf("%d", &valor_ingresado);
		
		// Solo cargamos el valor al vector si respeta el minimo y el maximo establecido
		if(valor_ingresado >= VALOR_MINIMO && valor_ingresado <= VALOR_MAXIMO){
			vector_dos[cantidad_valores_ingresados] = valor_ingresado;
			cantidad_valores_ingresados++;
		} else { // sino mostramos un error y contiuamos
			printf("ERROR: El valor %d no respeta el minimo y el maximo establecido.\n", valor_ingresado);
		}
		
	} while(cantidad_valores_ingresados < TAMANO);
	
	printf("Vector uno: ");
	// Muestra el vector uno resultante
	for(int i = 0; i<TAMANO; i++){
		printf(" [%d] ", vector_uno[i]);
	}
	printf("\nVector dos: ");
	// Muestra el vector dos resultante
	for(int i = 0; i<TAMANO; i++){
		printf(" [%d] ", vector_dos[i]);
	}
	
	// inicializa la bandera asumiendo que los vectores son iguales
	son_iguales = 1;
	for(int i = 0; i<TAMANO; i++){ // recorremos cada posicion del vector
		if(vector_uno[i] != vector_dos[i]){ // Si encontramos una posicion que difere en ambos
			son_iguales = 0; // modificamos la bandera a falso (0)
			break; // frenamos la iteracion ya que no es necesario continuar
		}
	}

	// si son iguales se muestra un mensaje
	if(son_iguales){
		printf("\nLos vectores son iguales");
	} else { // si no son iguales, se muestra otro mensaje
		printf("Los vectores NO son iguales");
	}
		
		
	return 0;
}

