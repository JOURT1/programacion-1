#include <stdio.h>
#include <stdlib.h>
#include "modulos.h"

void calculodescuento(float total)
{
    
    int descuento;
    if (total >= 501 && total <= 1000)
    {
        descuento = 4;
    }
    else if (total >= 1001 && total <= 5000)
    {
        descuento = 7;
    }
    else if (total >= 5001)
    {
        descuento = 9;
    }
    return descuento;
}

float calculosubtotal(float subtotal)
{
    float total;
    int descuento;
    if (subtotal >= 501 && subtotal <= 1000)
    {
        total = subtotal * 0.96;
        descuento = 4;
    }
    else if (subtotal >= 1001 && subtotal <= 5000)
    {
        total = subtotal * 0.93;
        descuento = 7;
    }
    else if (subtotal >= 5001)
    {
        total = subtotal * 0.91;
        descuento = 9;
    }
    return total;
}

void imprimirfactura(float num1, float num2, float num3, float num4, float num5, float subtotal1, float subtotal2, float subtotal3, float subtotal4, float subtotal5)
{
    float precio1 = 150, precio2 = 55, precio3 = 180, precio4 = 70, precio5 = 120;
    char nombre[50], cedula[20];

    printf("Ingrese el nombre del cliente\n");
    scanf("%[^\n]s", &nombre);
    printf("Ingrese la cedula del cliente\n");
    scanf("%s", &cedula);

    printf("\t\t\t################################\n");
    printf("\t\t\t##########Factura###############\n");

    printf("Nombre: %s\n", nombre);
    printf("Cedula: %s\n", cedula);

    printf("Producto\t\tCantidad\t\tPrecio Unitario\t\tPrecio total\n");
    if (num1 != 0)
    {
        printf("Llants\t\t\t%.0f\t\t\t%.2f\t\t\t%.2f\n", num1, precio1, subtotal1);
    }
    if (num2 != 0)
    {
        printf("Pastillas de freno\t%.0f\t\t\t%.2f\t\t\t%.2f\n", num2, precio2, subtotal2);
    }
    if (num3 != 0)
    {
        printf("Kit de embrague\t\t%.0f\t\t\t%.2f\t\t\t%.2f\n", num3, precio3, subtotal3);
    }
    if (num4 != 0)
    {
        printf("Faro\t\t\t%.0f\t\t\t%.2f\t\t\t%.2f\n", num4, precio4, subtotal4);
    }
    if (num5 != 0)
    {
        printf("Radiador\t\t%.0f\t\t\t%.2f\t\t\t%.2f\n", num5, precio5, subtotal5);
    }
}