#include <stdio.h>
#include <stdlib.h>

#define DIAS 7
#define HORAS 24
#define TOPE_SUPERIOR 45
#define TEMPERATURA_MAXIMA 46
#define TEMPERATURA_MINIMA -1

int main(int argc, char *argv[]) {
	int temperaturas[DIAS][HORAS], temperaturas_maximas_dia[DIAS], temperaturas_minimas_dia[DIAS];
	int numero_aleatorio, semilla, sumatoria_temperaturas_semana = 0, sumatoria_temperaturas_dias[DIAS];
	int temperatura_maxima_semana = TEMPERATURA_MINIMA, temperatura_minima_semana = TEMPERATURA_MAXIMA;
	float temperatura_media_semana, temperaturas_medias_dias[DIAS];
	int cantidad_dias_temperatura_mayor_30 = 0;
	
	printf("Ingrese una semilla para inicializar valor randmon: ");
	scanf("%d", &semilla);
	
	srand(semilla);
		
	// recorremos los dias
	for(int dia = 0; dia<DIAS; dia++){
		// recorremos las horas
		for(int hora = 0; hora<HORAS; hora++){
			// Generacion de temperaturas aleatorias
			numero_aleatorio = rand() % (TOPE_SUPERIOR+1);
			temperaturas[dia][hora] = numero_aleatorio;
		}
		// Inicializacion de vectores auxiliaries
		temperaturas_maximas_dia[dia] = TEMPERATURA_MINIMA;
		temperaturas_minimas_dia[dia] = TEMPERATURA_MAXIMA;
		sumatoria_temperaturas_dias[dia] = 0;
	}
	
	// Mostramos la matriz resultante
	// recorremos los dias
	for(int dia = 0; dia<DIAS; dia++){
		// recorremos las horas
		for(int hora = 0; hora<HORAS; hora++){
			printf("\t[%d]", temperaturas[dia][hora]); // para la fila actual, mostramos los valores separados por una tabulacion \t
		}
		printf("\n"); // Una vez que mostramos todos las columnas para esa fila, ingresamos un enter
	}
	
	// Realizamos los calculos
	for(int dia = 0; dia<DIAS; dia++){
		// recorremos las horas
		for(int hora = 0; hora<HORAS; hora++){
			// Actualizacion de temperatura maxima por toda la semana
			if(temperaturas[dia][hora] > temperatura_maxima_semana){
				temperatura_maxima_semana = temperaturas[dia][hora];
			}
			
			// Actualizacion de temperatura minima por toda la semana
			if(temperaturas[dia][hora] < temperatura_minima_semana){
				temperatura_minima_semana = temperaturas[dia][hora];
			}
			
			// Sumatoria de las temperaturas de toda la semana
			sumatoria_temperaturas_semana += temperaturas[dia][hora];
			
			// Actualizacion de temperatura maxima por dia
			if(temperaturas[dia][hora] > temperaturas_maximas_dia[dia]){
				temperaturas_maximas_dia[dia] = temperaturas[dia][hora];
			}
			
			// Actualizacion de temperatura minima por dia
			if(temperaturas[dia][hora] < temperaturas_minimas_dia[dia]){
				temperaturas_minimas_dia[dia] = temperaturas[dia][hora];
			}
			
			// Sumatoria de las temperaturas de cada dia
			sumatoria_temperaturas_dias[dia] += temperaturas[dia][hora];
		}
	}
	
	// Calculo de temperatura media de la semana
	temperatura_media_semana = sumatoria_temperaturas_semana / (float) (DIAS*HORAS);
	
	// recorremos los dias
	for(int dia = 0; dia<DIAS; dia++){
		// para cada dia calculamos la temperatura media por dia
		temperaturas_medias_dias[dia] = sumatoria_temperaturas_dias[dia] / (float) (HORAS);
		if(temperaturas_medias_dias[dia] > 30){ // Actualizacion de la cantidad de dias con temperatura media mayor a 30 grados
			cantidad_dias_temperatura_mayor_30++;
		}
	}
	
	// Muestra de resultados
	// para semana
	printf("Semana: Temp Media [%f], Temp Max [%d], Temp Min [%d], Dias con Temp > 30º [%d]\n", temperatura_media_semana, temperatura_maxima_semana, temperatura_minima_semana, cantidad_dias_temperatura_mayor_30);

	// para cada dia
	for(int dia = 0; dia<DIAS; dia++){
		printf("Dia %d: Temp Media [%f], Temp Max [%d], Temp Min [%d]\n", dia, temperaturas_medias_dias[dia], temperaturas_maximas_dia[dia], temperaturas_minimas_dia[dia]);
	}
	
	return 0;
}

