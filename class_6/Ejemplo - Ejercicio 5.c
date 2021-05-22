#include <stdio.h>
#include <stdlib.h>

#define CUIDADES 10

int main(int argc, char *argv[]) {
	float distancias[CUIDADES][CUIDADES] = { // Para el ejemplo solo uni a las ciudades 0 con 1, 1 con 2 y 2 con 3. Claramente lo inverso tambien es decir 3 con 2, 2 con 1 y 1 con 0.
		{0,5,0,0,0,0,0,0,0,0},
		{5,0,4,0,0,0,0,0,0,0},
		{0,4,0,3,0,0,0,0,0,0},
		{0,0,3,0,0,0,0,0,0,0},	
		{0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0},
	};
	int trayecto[CUIDADES], trayecto_valido = 1, distancia_tramo_actual = 0;
	float kms_totales_trayecto = 0;
	
	// Ingreso las 10 cuidades que tendrá el tramo
	for(int i = 0; i<CUIDADES; i++){
		printf("Ingresar cuidad %d del trayecto: ", i+1);
		scanf("%d", &trayecto[i]);
	};
	
	// Recorro cada una de las ciudades del tramo, comenznado por el primer destino, es decir i=1, i=0 seria el primer origen
	for(int i = 1; i<CUIDADES; i++){
		// Calculo la distancia entre el origen actual (almacenado en posicion i-i) y destino actual (almacenado en posicion i) del trayecto
		distancia_tramo_actual = distancias[trayecto[i-1]][trayecto[i]]; // distancia entre la ciudad origen del trayecto (trayecto[i-1]) y la actual (trayecto[i])
		if(distancia_tramo_actual > 0){ // si existe conexion entre origen y destino
			kms_totales_trayecto += distancia_tramo_actual; // voy sumando los kms
		} else{ // si no existe conexion entre origen y destino, indico el recorrido como invalido
			trayecto_valido = 0;
			break;
		}
	}
	
	if(trayecto_valido){
		printf("El trayecto es de %f kilometros.", kms_totales_trayecto);
	} else {
		printf("El trayecto no es valido");
	}
	
	return 0;
}

