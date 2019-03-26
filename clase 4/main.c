#include <stdio.h>
#include <stdlib.h>
#include "ingreso.h"
#include "recursividad.h"
int main()
{
    /* int edad;
     int legajo;
     int peso;

     edad = pedirEnteroint factorial(int numero)("Ingrese edad: ");
     legajo = pedirEntero("Ingrese legajo: ");
     peso = pedirEntero("Ingrese peso: ");
     return 0;*/
   /* int factorial(int numero)
    int resultado = factorial(5);
    printf("%d", resultado);*/

   int option;
   char seguir = 's';

    do
    {
        printf("1.Alta\n2.Baja\n3.Informar\n4.Salir\nElija una Opcion");
        scanf("%d",&option);
        switch(option)
        {
        case 1:
            //Codigo caso Alta
            break;
        case 2:
            //Codigo caso Baja
            break;
        case 3:
            //Codigo caso Informar
            break;
        case 4:
            //Codigo Salir
            seguir = 'n';
            break;
        default:
            //No igreso una Opcion vallida
            break;
        }
    /*system("pause");
    system("cls");*/
    }while(seguir == 's');

    return 0;
}
