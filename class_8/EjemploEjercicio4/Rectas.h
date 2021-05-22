#ifndef RECTAS_H
#define RECTAS_H

struct Punto2D {
	float x;
	float y;
}typedef TipoPunto2D;

// f(x) = a * x + b
struct Recta2D {
	float a;
	float b;
}typedef TipoRecta2D;

extern int punto_pertenece_recta(TipoPunto2D punto, TipoRecta2D recta);


#endif
