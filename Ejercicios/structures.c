#include <stdio.h>
#include <stdlib.h>

struct point
{
    int x;
    int y;
};

main(void)
{
    struct point a;
    struct point b;

    a.x = 4;
    a.y = 2;
    b.x = 1;
    b.y = 3;

    printf("A: (%d , %d)\n", a.x, a.y);
    printf("B: (%d , %d)\n", b.x, b.y);
}