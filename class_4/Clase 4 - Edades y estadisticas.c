#include <stdio.h>
#include <math.h>
#define MAX_PERSONAS 20
#define MAX_EDAD 150

int main(int argc, char *argv[]) {
	int edades[MAX_PERSONAS], contador[MAX_EDAD],cantidad_personas=0, i, j, aux, suma_edad;
	float suma_desviacion, media, desviacion; 
	int frecuencia_maxima, moda, mediana;
	
	/** Lectura de edades */
	for(i=0; i<MAX_PERSONAS; i++){
		printf("Introduce edad numero [%d] (inserter negativo para terminar): ", i+1);
		scanf("%d", &edades[i]);
		if(edades[i] < 0)
			break;
		cantidad_personas++;
	}
	
	/** Calculo de la media */
	suma_edad = 0;
	for(i=0; i<cantidad_personas; i++)
		suma_edad += edades[i];
	media = suma_edad / (float) cantidad_personas;
	
	/** Calculo desviacion */
	suma_desviacion = 0;
	for(i=0; i<cantidad_personas; i++)
		suma_desviacion += (edades[i] - media) * (edades[i] - media);
	desviacion = sqrt(suma_desviacion / cantidad_personas);
	
	/** Calculo de la moda */
	for(i=0; i<MAX_EDAD; i++) // Inicializacion de contadores por edades
		contador[i]=0;
	
	/* Contamos la cantidad de veces que aparece cada edad */
	for(i=0; i<cantidad_personas; i++) 
		contador[edades[i]]++; // Incrementamos el contador asociado a edad[i]
	
	
	moda = -1;
	frecuencia_maxima = 0;
	for(i=0; i<MAX_EDAD; i++){ // i va iterando por cada una de las edades
		if(contador[i] > frecuencia_maxima){
			frecuencia_maxima = contador[i]; // actualizamos la frecuencia maxima encontrada
			moda=i; // i corresponde a la edad
		}
	}
	
	/** Ordenamiento del vector de edades */
	for(i=0; i<cantidad_personas-1; i++){
		for(j=0; j<cantidad_personas-i; i++){
			if(edades[j] > edades[j+1]) {
				aux = edades[j];
				edades[j] = edades[j+1];
				edades[j+1] = aux;
			}
		}
	}
	
	/** Calculo de la mediana */
	mediana = edades[cantidad_personas/2];
	
	/** Impresion de resultados */
	printf("Edad media: %f\n", media);
	printf("Desv. típica: %f\n", desviacion);
	printf("Moda: %d\n", moda);
	printf("Mediana: %d\n", mediana);
	
	
	return 0;
}

