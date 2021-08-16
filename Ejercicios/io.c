#include <stdio.h>

int main(void)
{
    char name[10];
    printf("What is your name? ");
    if (fgets(name, 10, stdin) != NULL)
    {
        printf("Hello %s!\n", name);
    }
}