#include <stdio.h>
#include <stdlib.h>
#include "menus/menus.h"
#include "modulos/modulos.h"

float subtotal1 = 0, subtotal2 = 0, subtotal3 = 0, subtotal4 = 0, subtotal5 = 0;
float num1 = 0, num2 = 0, num3 = 0, num4 = 0, num5 = 0;
float subtotal = 0, total = 0;
int descuento = 0;
float precio1 = 150, precio2 = 55, precio3 = 180, precio4 = 70, precio5 = 120;

int main(int argc, char *argv[])
{

    while (1)
    {

    Menu1:

        int dato = menuprincipal();

        switch (dato)
        {
        case 1:

        Menu2:

            char opcion = menuopciones();

            switch (opcion)
            {
            case 'a':
                printf("Ingrese el numero de Llantas que desea facturar: \n");
                scanf("%f", &num1);
                break;

            case 'b':
                printf("Ingrese el numero de Pastillas de freno que desea facturar: \n");
                scanf("%f", &num2);
                break;

            case 'c':
                printf("Ingrese el numero de Kits de embrague que desea facturar: \n");
                scanf("%f", &num3);
                break;

            case 'd':
                printf("Ingrese el numero de Faros que desea facturar: \n");
                scanf("%f", &num4);
                break;

            case 'e':
                printf("Ingrese el numero de Radiadores que desea facturar: \n");
                scanf("%f", &num5);
                break;

            default:
                break;
            }

            break;

        case 2:

            subtotal1 = num1 * precio1;
            subtotal2 = num2 * precio2;
            subtotal3 = num3 * precio3;
            subtotal4 = num4 * precio4;
            subtotal5 = num5 * precio5;

            subtotal = subtotal1 + subtotal2 + subtotal3 + subtotal4 + subtotal5;

            total = calculosubtotal(subtotal);
            descuento = calculodescuento();

            system("cls");

            imprimirfactura(num1, num2, num3, num4, num5, subtotal1, subtotal2, subtotal3, subtotal4, subtotal5);

            printf("El subtotal es: %.2f\n", subtotal);
            printf("El total aplicado su descuento es de: %.2f\n", total);
            printf("El valor de descuento es de: %d", descuento);

            return 0;

            break;

        case 3:
            return 0;
            break;

        default:
            break;
        }

        system("cls");
        fflush(stdin);
        printf("Desea comprar otro objeto?\n");
        printf("Si desa comprar otro objeto ingrese 's', de lo contrario 'n'\n");
        scanf("%c", &dato);
        getchar();
        system("cls");

        if (dato == 's')
        {
            goto Menu2;
        }
        else if (dato == 'n')
        {
            goto Menu1;
        }
    }
}
