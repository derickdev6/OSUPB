#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct point
{
    int x;
    int y;
};
bool comparePoints(struct point a, struct point b);

main(void)
{
    struct point a;
    struct point b;

    a.x = 4;
    a.y = 2;
    b.x = 4;
    b.y = 2;

    printf("A: (%d , %d)\n", a.x, a.y);
    printf("B: (%d , %d)\n", b.x, b.y);

    printf("Is equal? %d\n", comparePoints(a, b));
}

bool comparePoints(struct point a, struct point b)
{
    // if (a.x == b.x && a.y == b.y)
    // {
    //     return true;
    // }
    // else
    // {
    //     return false;
    // }

    return (a.x == b.x && a.y == b.y) ? true : false;
}