#include <stdio.h>
#include <math.h>
#include "funcion.h"

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

float calcularDistancia(float x1, float y1, float x2, float y2)
{
    float d = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
    return d;
}

float areaTrianguloInterno(float a, float b, float c)
{
    float h = (b * c) / a;
    float n = (pow(h, 2) / c);
    float m = (pow(c, 2) / a);
    float h2 = (m * h) / c;

    float Area = (n * h2) / 2;

    if (pow(a, 2) == pow(b, 2) + pow(c, 2))
    {
        printf("\nEl triangulo es rectangulo\n");
    }
    else
    {
        printf("\nEl triangulo no es rectangulo\n");
    }

    return Area;
}

