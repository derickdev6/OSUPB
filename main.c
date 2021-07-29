#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    printf("Sistemas Operativos\n");

    int num = 10;

    printf("num: %d \n", num);

    // Lo que hacemos aca es crear en HEAP una estructura que es
    // un conjunto de datos, el cual se crea con el constructor,
    // retornando a la variable var la direccion del objeto en memoria,
    // var es el puntero
    // class_name var = new class_name();

    // Si quiero almacenar en una variable la direccion de otra variable
    // hago lo siguiente - esto es un puntero
    // El operador & me permite obtener la direccion de una variable
    int *pvar = &num;

    printf("num dir: %lx \n", (long int)&num);
    printf("pvar: %lx \n", (long int)pvar);

    // Esto es una variable donde almaceno direcciones donde almaceno variables
    // que almacenan direcciones, de variables que almacenan enteros
    // int **ppvar = &*pvar;

    return EXIT_SUCCESS;
}