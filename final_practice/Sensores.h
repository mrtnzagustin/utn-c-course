#ifndef SENSORES_H
#define SENSORES_H

#define S_MAX_NOMBRE_SENSOR 50
#define S_MAX_CANTIDAD_SENSORES 10
#define S_DEMORA_MIN_LECTURA 1
#define S_DEMORA_MAX_LECTURA 10

struct Sensor {
	char nombre[S_MAX_NOMBRE_SENSOR+1];
	int valor_maximo;
	int valor_minimo;
	int identificador;
	int demora_en_lectura;
}typedef TipoSensor;

struct ListaSensores {
	TipoSensor lista[S_MAX_CANTIDAD_SENSORES];
	int cantidad_sensores;
}typedef TipoListaSensores;

struct RegistroSensado {
	int segundo;
	int valor;
} typedef TipoRegistroSensado;

void ejecutar_simulacion(TipoListaSensores sensores, int segundos_simulacion);

void almacenar_sensado(TipoSensor sensor, TipoRegistroSensado registro_sensado);

int generar_valor_aleatorio(TipoSensor sensor);

#endif
