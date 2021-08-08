#include <stdio.h>
#include <stdlib.h>

// Directivas
// Dependiendo de si la directiva CONDITION esta definida o no
// Se ejecutara el codigo en la linea 11-12 o en la linea 13-14
// #define CONDITION

// Tambien se puede definir la variable CONDITION si se pasa
// en el momento de compilar como -DCONDITION

int main(int argc, char *argv[])
{
#ifdef CONDITION
    printf("CODIGO IF\n");
#else
    printf("CODIGO ELSE\n");
#endif
    return 0;
}