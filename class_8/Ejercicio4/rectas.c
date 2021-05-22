#include "rectas.h"
/**
	Indica si un punto enviado como parametro, pertenece o no a la recta
	punto: el punto que debe evaluar si pertenece o no a la Recta
	recta: la recta para la cual se debe evaluar si el punto pertenece
*/
int puntoPerteneceARecta(TipoPunto punto, TipoRecta recta){
	// Evaluamos la recta para el valor x del punto
	float evaluacion = evaluarFuncionRecta(recta, punto.x);
	
	// Si la evaluacion es igual al valor de y del punto, entonces el punto pertenece a la recta
	if(evaluacion == punto.y)
		return 1;
	else // Sino el punto no pertence
		return 0;
}
/**
	Evalua el valor de la funcion de la recta para el valor de x enviado como parametro
	x: valor a evaluar
	recta: recta sobre la cual debe evaluarse el valor de x
*/
float evaluarFuncionRecta(TipoRecta recta, float x){
	return recta.a * x + recta.b; // y = a * x + b
}
