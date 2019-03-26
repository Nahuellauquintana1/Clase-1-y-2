#include <stdio.h>
#include <stdlib.h>
#include "ingreso.h"
#include "Factorizacion.h"
int menu()
{
   int option;
   char seguir = 's';

    do
    {
        printf("1.Suma\n2.Resta\n3.Division\n4.Multiplicacion\n5.Factorial\nElija una Opcion");
        scanf("%d",&option);
        switch(option)
        {
        case 1:
            //Codigo caso Suma
            break;
        case 2:
            //Codigo caso Resta
            break;
        case 3:
            //Codigo caso Division
            break;
        case 4:
            //Codigo Factorial

            break;
        case 5:
            seguir = 'n';
            break;
        default:
            printf("Ingrese una opcion valida");
            break;
        }
    /system("pause");
    system("cls");
    }while(seguir == 's');

    return 0;
}
