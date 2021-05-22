#include <stdio.h>
#include <stdlib.h>

#define CANTIDAD_PALOS 4
#define MAX_TEXTO_PALOS 10
#define MAX_TEXTO_CARTAS 20
#define CANTIDAD_NUMEROS 12
#define TOPE_SUPERIOR 48

int main(int argc, char *argv[]) {
	char palos[CANTIDAD_PALOS][MAX_TEXTO_PALOS]={"Oro", "Copa", "Espada", "Basto"}; // vector de cadenas con los palos
	char cartas[CANTIDAD_PALOS * CANTIDAD_NUMEROS][MAX_TEXTO_CARTAS]; // vector de cadenas con los nombres de las cartas a generar
	int cartas_ya_mezcladas[CANTIDAD_PALOS * CANTIDAD_NUMEROS]; // este vector relaciona cada posicion con una carta, en referencia al vector cartas, e indica con 0 o 1 si la carta ya fue barajada o no.
	int cartas_barajadas[CANTIDAD_PALOS * CANTIDAD_NUMEROS]; // almacena las cartas barajadas, cada posicion posee el numero de carta que se entrega en orden
	int carta_aleatoria, semilla, i;
	
	printf("Ingrese una semilla para inicializar valor randmon: ");
	scanf("%d", &semilla);
	
	srand(semilla);
	
	// se itera por cada palo
	for(int palo = 0; palo<CANTIDAD_PALOS; palo++){
		// se itera por cada palo, cada una de las doce cartas
		for(int numero_de_carta = 0; numero_de_carta < CANTIDAD_NUMEROS; numero_de_carta++){
			switch(numero_de_carta+1){ // depende el numero de carta, se usa diferente logica para generar el nombre (sumamos 1 para que sea mas legible el codigo)
				case 1:
					sprintf(cartas[numero_de_carta + CANTIDAD_NUMEROS * palo], "As de %s", palos[palo]);
					break;
				case 10:
					sprintf(cartas[numero_de_carta + CANTIDAD_NUMEROS * palo], "Sota de %s", palos[palo]);
					break;
				case 11:
					sprintf(cartas[numero_de_carta + CANTIDAD_NUMEROS * palo], "Caballo de %s", palos[palo]);
					break;
				case 12:
					sprintf(cartas[numero_de_carta + CANTIDAD_NUMEROS * palo], "Rey de %s", palos[palo]);
					break;
				default: // si cae al default, sera para valores del 2 al 9 inclusive
					sprintf(cartas[numero_de_carta + CANTIDAD_NUMEROS * palo], "%d de %s", numero_de_carta+1, palos[palo]);
					break;
			}
			cartas_ya_mezcladas[numero_de_carta + CANTIDAD_NUMEROS * palo] = 0; // aprovechamos este bucle para inicializar en 0 el vector de cartas_ya_mezcladas (leer arriba)
		}
	}
	
	i = 0;
	// iteramos hasta que i llegue al total de cartas
	while(i<CANTIDAD_PALOS * CANTIDAD_NUMEROS){
		carta_aleatoria = rand() % (TOPE_SUPERIOR+1); // barajamos una carta aleatoria
		if(!cartas_ya_mezcladas[carta_aleatoria]){ // si la carta aleatoria, no fue mezclada
			cartas_ya_mezcladas[carta_aleatoria] = 1; // indicamos que esa carta ya fue barajada
			
			// aqui podemos almacenar la carta barajada en orden para luego mostrarla
			cartas_barajadas[i] = carta_aleatoria;
			// o podemos directamente ir motrandolas sin almacenar el orden (linea anterior)
			printf("%s\n", cartas[carta_aleatoria]);
			i++; // solo incrementamos i cuando barajamos una carta nueva
		}
	}
	return 0;
}

