#include <stdio.h>
#include <math.h>

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

    float bx = (x1 + x2 + x3) / 3;
    float by = (y1 + y2 + y3) / 3;

    printf("El varicentro es: (%.2f,%.2f)", bx, by);

    float d1 = sqrt(pow((bx - x1), 2) + pow((by - y1), 2));
    float d2 = sqrt(pow((bx - x2), 2) + pow((by - y2), 2));
    float d3 = sqrt(pow((bx - x3), 2) + pow((by - y3), 2));

    // aqui empieza calculo de distancias

    if (d1 < d2 && d1 < d3)
    {
        float A = (3.14 * pow((d1), 2));
        printf("\nArea del circulo:%.2f", A);
    }
    else if (d2 < d3 && d2 < d3)
    {
        float A = (3.14 * pow((d2), 2));
        printf("\nArea del circulo:%.2f", A);
    }
    else if (d3 < d2 && d3 < d1)
    {
        float A = (3.14 * pow((d3), 2));
        printf("\nArea del circulo:%.2f", A);
    }
    return 0;
}
