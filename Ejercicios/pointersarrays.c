#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main(int argc, char *argv[])
{
    int32_t arr[4] = {1, 3, 5, 7};
    uint32_t *pvar = arr;

    // El contenido de las variables es el mismo,
    // La direccion del primer valor del arreglo
    printf("arr %d = pvar %d\n", arr, pvar);
    // El contenido de la direccion de las dos variables es el mismo
    // El primer valor del arreglo
    printf("*arr %d = *pvar %d\n", *arr, *pvar);
    // Las direcciones de las dos variables son distintas
    // La primera se trata de la direccion del primer valor del arreglo
    // La segunda se trata de la direccion que contiene
    // la direccion de la primera posicion del arreglo
    printf("&arr %d != &pvar %d\n", &arr, &pvar);

    // *pvar2[4] sera un arreglo de 4 posiciones donde se almacenaran
    // las direcciones de los valores del arreglo arr[4]
    uint32_t(*pvar2)[4] = &arr;

    for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
    {
        printf("arr[%d]: %d\t pvar2[%d]: %d\n", i, arr[i], i, pvar2[i]);
    }
}