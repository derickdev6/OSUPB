#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    printf("Sistemas Operativos\n");

    int num = 10;

    printf("num: %d \n", num);

    // Si quiero almacenar en una variable la direccion de otra variable
    // hago lo siguiente - esto es un puntero
    // El operador & me permite obtener la direccion de una variable
    int *pvar = &num;

    printf("num dir: %lx \n", (long int)&num);
    printf("pvar: %lx \n", (long int)pvar);

    // Esto es una variable donde almaceno direcciones donde almaceno variables
    // que almacenan direcciones, de variables que almacenan enteros
    // int **ppvar = &pvar;

    // Cosas que puedo hacer con el puntero son
    // Leer la variable usando el puntero
    // Con el * puedo leer el contenido de la direccion almacenada en pvar

    printf("Leer num usando pvar -> %d\n", *pvar);

    // Escribir en la variable usando pvar

    *pvar = 20;

    printf("Escribi 20 en num usando pvar -> %d\n", *pvar);

    return EXIT_SUCCESS;
}