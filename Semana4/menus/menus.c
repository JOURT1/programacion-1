#include <stdio.h>
#include <stdlib.h>
#include "menus.h"

char menuprincipal()
{
    int dato;
    printf("\t\t\t BIENVENIDO AL SISTEMA DE FACTURACION\n");
    printf("Seleccione una opccion\n\n");
    printf("1.  Facturar producto\n");
    printf("2.  Imprimir factura\n");
    printf("3.  Salir\n");
    scanf("%d", &dato);
    getchar();
    fflush(stdin);
    system("cls");

    return dato;
}

char menuopciones()
{
    char opcion;
    printf("Seleccione una opccion\n\n");

    printf("a) Llantas (Precio: $150)\n");
    printf("b) Kit Pastillas de freno (Precio: $55)\n");
    printf("c) Kit de embrague (Precio: $180)\n");
    printf("d) Faro (Precio: $70)\n");
    printf("e) Radiador (Precio: $120)\n");
    scanf("%c", &opcion);
    getchar();
    fflush(stdin);
    system("cls");

    return opcion;
}