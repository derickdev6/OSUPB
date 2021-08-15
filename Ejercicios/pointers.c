#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main(int argc, char *argv[])
{
    uint32_t var = 10;
    // Almacenamos en una variable de puntero la direccion de otra variable
    uint32_t *pvar = &var;

    // Verificamos que
    // Las direcciones son la misma
    printf("&var %d = pvar %d\n", &var, pvar);
    // Los valores en la direccion son accesibles con ambas variables
    printf("var %d = *pvar %d\n", var, *pvar);

    *pvar = 20;

    printf("&var %d = pvar %d\n", &var, pvar);
    printf("var %d = *pvar %d\n", var, *pvar);
}