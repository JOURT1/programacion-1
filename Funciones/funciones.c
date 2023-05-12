#include <stdio.h>
#include <math.h>
#include "funciones.h"

float ingresarCoordenadaX()
{
    float x;
    printf("Ingresa la X\n");
    scanf("%f", &x);
    return x;
}

float ingresarCoordenadaY()
{
    float y;
    printf("Ingresa la Y\n");
    scanf("%f", &y);
    return y;
}

float obtenerBaricentroX(float x1, float x2, float x3)
{
    float bx = (x1 + x2 + x3) / 3;
    return bx;
}

float calcularRadio(float x1, float y1, float bx, float by)
{
    float d1 = sqrt(pow((bx - x1), 2) + pow((by - y1), 2));

    return d1;
}
float calcularArea(float radio)
{
    float A = (3.14 * pow((radio), 2));
    printf("\nArea del circulo:%.2f", A);
}