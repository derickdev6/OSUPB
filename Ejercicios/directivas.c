#include <stdio.h>
#include <stdlib.h>

// Directivas
#define M 5
#define C 5

int main(int argc, char *argv[])
{
    int x = 2;
    // La variable y sera definida por x * M + C
    // M sera dada por la directiva en la linea 5
    // C sera dada por la directiva en la linea 6
    int y = x * M + C;
    printf("y = %d\n", y);
    return 0;
}