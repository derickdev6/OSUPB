#include <stdio.h>

struct Point
{
    int x;
    int y;
};

int main()
{
    struct Point p1 = {10, 20};
    // En pp1 guardo la direccion de la estructura p1
    struct Point *pp1 = &p1;
    // El operador flechita (->) indica que se busque el valor
    // de la propiedad con el nombre de la derecha dentro de la
    // estructura en la direccion guardada en la izquierda
    printf(" p1.x = %d, p1.y = %d\n", pp1->x, pp1->y);
    return 0;
}