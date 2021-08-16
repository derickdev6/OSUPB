#include <stdio.h>
#include <stdint.h>

int main(void)
{
    char text[] = "hola c";

    printf("%s\n", text);

    text[0] = 'H';
    printf("%s\n", text);
    *text = 'h';
    printf("%s\n", text);
}