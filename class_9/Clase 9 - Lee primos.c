#include <stdio.h>

int main(int argc, char *argv[]) {
	FILE * fp;
	int numero_leido; // variable para almacenar cada numero que se va leyendo
	
	fp = fopen("primos.txt", "r"); // Abrimos el archivo en modo lectura
	fscanf(fp, "%d", &numero_leido); // leemos el primer numero
	
	while(!feof(fp)){ // mientras no (!) lleguemos al final del archivo, contiuamos leyendo
		printf("%d\n", numero_leido); // imprime por pantalla el numero leido
		fscanf(fp, "%d", &numero_leido); // lee el proximo numero
	}
	
	fclose(fp); // cierra el archivo
	return 0;
}

