#include <stdio.h>
#include <string.h>

int main(void)
{
    char name[10];
    printf("What is your name? ");
    if (fgets(name, 10, stdin) != NULL)
    {
        // Esta linea elimina el caracter de enter,
        // Reemplazandolo por un 0
        name[strlen(name) - 1] = 0;
        printf("Hello %s!\n", name);
    }
}