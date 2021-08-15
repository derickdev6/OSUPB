#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main(int argc, char *argv[])
{
    uint32_t var = 10;
    uint32_t *pvar = &var;

    printf("&var %d = pvar %d\n", &var, pvar);
    printf("var %d = *pvar %d\n", var, *pvar);

    *pvar = 20;

    printf("&var %d = pvar %d\n", &var, pvar);
    printf("var %d = *pvar %d\n", var, *pvar);
}