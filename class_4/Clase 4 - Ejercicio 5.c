#include <stdio.h>
#include <stdlib.h>

#define TAMANO 168 // Tamaño del vector 24 x 7
#define DIAS_SEMANA 7 // Cantidad de dias de la semana
#define TEMPERATURA_MAXIMA_POSIBLE 100 // Un valor alto de temperatura para inicializar las "teperaturas minimas"
#define HORAS_DIA 24 // Horas del dia
#define ALEATORIO_TEMP_MAX 50 // Maximo valor aleatorio de temperatura

enum {Domingo=0, Lunes, Martes, Miercoles, Jueves, Viernes, Sabado};

int main(int argc, char *argv[]) {
	int numero_aleatorio, semilla;
	int temperaturas[TAMANO], temperatura_maxima_semana = 0, temperatura_minima_semana = TEMPERATURA_MAXIMA_POSIBLE;
	int temperaturas_maximas_por_dia[DIAS_SEMANA] = {0, 0, 0, 0, 0, 0, 0}, temperaturas_minimas_por_dia[DIAS_SEMANA], suma_temperaturas_por_dia[DIAS_SEMANA] = {0, 0, 0, 0, 0, 0, 0};
	float temperatura_media_por_dia[DIAS_SEMANA];
	int dias_temperatura_mayor_30_grados = 0;
	int mayor_temperatura_valor = 0, mayor_temperatura_dia, mayor_temperatura_hora;
	int suma_temperaturas = 0;
	char dias_semana[DIAS_SEMANA]={'D','L','M','X','J','V','S'};
	float temperatura_media_semana;
	
	// Semilla para valores aleatorios
	srand(semilla);
	printf("Ingrese una semilla para inicializar valor randmon: ");
	scanf("%d", &semilla);
	
	// Bucle para carga de datos con valores aleatorios
	for(int i = 0; i<TAMANO; i++){
		// Carga aleatoria
		numero_aleatorio = rand() % (ALEATORIO_TEMP_MAX+1);
		temperaturas[i] = numero_aleatorio;
	}
	
	// Setea los valores de temperaturas minimas iniciales, como los maximos posibles
	for(int i = 0; i<DIAS_SEMANA; i++){
		temperaturas_minimas_por_dia[i] = TEMPERATURA_MAXIMA_POSIBLE;
	}
	
	// Variables auxiliares para calcular dia y hora actual en cada iteracion de i
	int dia_actual, hora_actual;
	// Recorre todos los valores de temperaturas
	for(int i = 0; i<TAMANO; i++){
		// Calcula el dia y la hora en la cual se encuentra el recorrido con i
		dia_actual = i / HORAS_DIA;
		hora_actual = i - dia_actual * HORAS_DIA;
		
		// Calculo de temperaturas maximas para la semana
		if(temperaturas[i] > temperatura_maxima_semana)
			temperatura_maxima_semana = temperaturas[i];
		if(temperaturas[i] < temperatura_minima_semana)
			temperatura_minima_semana = temperaturas[i];
		
		// Sumatoria para calculo de temperatura media de la semana
		suma_temperaturas += temperaturas[i];
		
		// Calculo de temperatura maxima por dia
		if(temperaturas[i] > temperaturas_maximas_por_dia[dia_actual])
			temperaturas_maximas_por_dia[dia_actual] = temperaturas[i];
		if(temperaturas[i] < temperaturas_minimas_por_dia[dia_actual])
			temperaturas_minimas_por_dia[dia_actual] = temperaturas[i];
		
		// Suma de temperaturas por dia	
		suma_temperaturas_por_dia[dia_actual] += temperaturas[i];
		
		// Temperatura de mayor valor de toda la semana
		// guarda valor, dia y hora
		if(temperaturas[i] >= mayor_temperatura_valor){
			mayor_temperatura_dia = dia_actual;
			mayor_temperatura_hora = hora_actual;
			mayor_temperatura_valor = temperaturas[i];
		}
		
		
	}
	
	// Calculo de la temperatura media de la semana
	temperatura_media_semana = suma_temperaturas / (float) TAMANO;
	
	// Por cada dia, calcula la temperatura media y
	// cuenta cuales son los dias que hubo temperatura media mayor a 30 grados
	for(int i = 0; i<DIAS_SEMANA; i++){
		temperatura_media_por_dia[i] = suma_temperaturas_por_dia[i] / (float) HORAS_DIA;
		if(temperatura_media_por_dia[i] >= 30){
			dias_temperatura_mayor_30_grados++;
		}
	}
	
	// Muestra resultados por pantalla
	printf("\n------ DATOS SEMANA ------\n");
	printf("La temperatura maxima de la semana fue %d y la minima fue %d\n", temperatura_maxima_semana, temperatura_minima_semana);
	printf("La temperatura media de la semana fue %f\n", temperatura_media_semana);
	printf("La ultima mayor temperatura fue de %d el dia %c a las %d hs\n", temperatura_maxima_semana, dias_semana[mayor_temperatura_dia], mayor_temperatura_hora);
	printf("La temperatura media fue mayor a 30 grados la siguiente cantidad de dias: %d\n", dias_temperatura_mayor_30_grados);
	
	for(int i = 0; i<DIAS_SEMANA; i++){
		printf("\n------ DATOS DIA %C ------\n", dias_semana[i]);
		printf("La temperatura maxima fue %d y la minima fue %d\n", temperaturas_maximas_por_dia[i], temperaturas_minimas_por_dia[i]);
		printf("La temperatura media fue de %5.2f grados\n", temperatura_media_por_dia[i]);
	}
	
	
	
	
	return 0;
}

