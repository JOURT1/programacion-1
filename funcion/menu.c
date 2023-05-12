#include <stdio.h>
#include <math.h>
#include "funcion/funcion.h"

// Obtener el área de un triangulo rectangulo interno a otro, conformado por
// las perpendiculares de la hipotenusa y el cateto mayor del triangulo externo.
// Se deben ingresar por teclado las componentes X y Y de los puntos que conforman
// el triangulo exterior y se debe validar que el mismo sea un triangulo rectangulo.
// Nota: La función main no debe ser modificada*//

int main(int argc, char *argv[])
{
    float x1 = ingresarCoordenadaX();
    float y1 = ingresarCoordenadaY();
    float x2 = ingresarCoordenadaX();
    float y2 = ingresarCoordenadaY();
    float x3 = ingresarCoordenadaX();
    float y3 = ingresarCoordenadaY();

    float a = calcularDistancia(x1, y1, x2, y2);
    float b = calcularDistancia(x1, y1, x3, y3);
    float c = calcularDistancia(x2, y2, x3, y3);

    float area = areaTrianguloInterno(a, b, c);

    printf("El area del triangulo interno es: %f", area);


    return 0;
}