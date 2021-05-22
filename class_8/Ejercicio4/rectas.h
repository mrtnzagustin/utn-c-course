struct Recta {
	float a, b;
}typedef TipoRecta;

struct Punto {
	float x, y;
}typedef TipoPunto;

int puntoPerteneceARecta(TipoPunto punto, TipoRecta recta);
float evaluarFuncionRecta(TipoRecta recta, float x);
