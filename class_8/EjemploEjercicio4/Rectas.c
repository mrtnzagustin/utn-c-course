#include "Rectas.h"

int punto_pertenece_recta(TipoPunto2D punto, TipoRecta2D recta)
{
	if(punto.x * recta.a + recta.b == punto.y)
		return 1;
	else
		return 0;
}
