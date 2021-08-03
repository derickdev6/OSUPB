#include <stdio.h>
#include <stdlib.h>
void printArr(int *arr, int size);

int main()
{
    int arr[] = {4, 2, 3, 4};

    for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
    {
        printf("arr[%d]: %d\n", i, arr[i]);
    }
    // arr es el nombre del arreglo, es la direccion del primer elemento del arreglo
    // El tipo del primer elemento del arreglo es int
    // arr es de tipo int

    // Guardo en parr la direccion del primer valor del arr
    int *parr = arr;

    printf("*parr: %d\n", parr);

    // Imprimo el arreglo usando el puntero y saltando de posiciones en memoria
    // for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
    // {
    //     printf("parr[%d]: %d\n", i, *(parr + i));
    // }

    // Imprimo el arreglo usando la funcion
    // Paso como parametros la posicion del primer elemento del arreglo y el tamano
    printArr(arr, sizeof(arr) / sizeof(int));
}

void printArr(int *arr, int size)
{
    for (int i = 0; i < size; i++)
        printf("PrintArr arr[%d]: %d\n", i, *(arr + i));
}