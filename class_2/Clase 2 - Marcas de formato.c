/**
 * EJEMPLO DE MARCAS DE FORMATO PARA ENTEROS, FLOTANTES Y TEXTO
 * */
#include <stdio.h>

int main()
{
    int a = 12345;
    float b = 123.45e2;
	char letra_a = 'a';

    printf("Entero con siete digitos [%7d]\n", a);
    printf("Entero con siete digitos, alineado izq [%-7d]\n", a);
    printf("Entero con siete digitos, rellenando con ceros [%07d]\n", a);
    printf("Entero con siete digitos, con singo [%+7d]\n", a);
    printf("Entero con siete digitos, con signo y rellenado con ceros [%+07d]\n", a);
    printf("Flotante con notacion tradicional, 12 digitos para parte entera y 4 para parte decimal [%12.4f]\n", b);
    printf("Flotante con notacion cientifica, 12 digitos para parte entera y 4 para parte decimal [%12.4e]\n", b);
	printf("Caracter ASCII para la letra a con variable char [%c]\n", letra_a);
	printf("Caracter ASCII para la letra a con numero entero [%c]\n", 97);
	printf("Una cadena de texto ejemplo [%s]\n", "Estoy en el curso de programación");
    
    return 0;
}
