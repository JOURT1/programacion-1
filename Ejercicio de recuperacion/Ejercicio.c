#include <stdio.h>
#include <math.h>
#include "Operaciones/Operaciones.h"

int main(int argc, char *argv[])
{
    float x1 = 0, x2 = 0, x3 = 0, y1 = 0, y2 = 0, y3 = 0;

    printf("Ingrese el x del punto 1\n");
    scanf("%f", &x1);
    getchar();

    printf("Ingrese el y del punto 1\n");
    scanf("%f", &y1);
    getchar();

    printf("Ingrese el x del punto 2\n");
    scanf("%f", &x2);
    getchar();

    printf("Ingrese el y del punto 2\n");
    scanf("%f", &y2);
    getchar();

    printf("Ingrese el x del punto 3\n");
    scanf("%f", &x3);
    getchar();

    printf("Ingrese el y del punto 3\n");
    scanf("%f", &y3);
    getchar();

    calculo_de_incognitas(x1, x2, x3, y1, y2, y3);

    return 0;
}