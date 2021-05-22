#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int dias, horas, minutos, segundos, segundosTotales;
	
	/** Solicitud de datos */
	printf("Ingrese el valor de los dias: ");
	scanf("%d", &dias);
	printf("\nIngrese el valor de las horas: ");
	scanf("%d", &horas);
	printf("\bIngrese el valor de los minutos: ");
	scanf("%d", &minutos);
	printf("\bIngrese el valor de los segundos: ");
	scanf("%d", &segundos);
	
	/** Calculo de segundos totales */
	segundosTotales = segundos + minutos * 60 + horas * 60 * 60 + dias * 24 * 60 * 60;
	printf("Segundos totales: [%0.20d]", segundosTotales);
	return 0;
}

