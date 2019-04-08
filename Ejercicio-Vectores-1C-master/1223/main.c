#include <stdio.h>
#include <stdlib.h>
#include "vector.h"
#define A 10

int main()
{
    int numero[A];
    int maximo;
    int lugar;
    int buscar;
    int option;
    int continuar = 's';
    do
    {
        printf("1.Cargar el array\n");
        printf("2.Mostrar array\n");
        printf("3.Mostrar el numero mayor\n");
        printf("4.Ingresar el valor a buscar dentro del array\n");
        printf("5.Ordenar el array de menor a mayor\n");
        printf("6.Salir\n");
        scanf("%d",&option);
        switch(option)
        {
        case 1:
            cargarArray(numero, A);
            break;
        case 2:
            mostrarArray(numero, A);

            break;
        case 3:
            maximo = maximoArray(numero, A);
            printf("El numero mayor es: %d\n", maximo);
            break;
        case 4:
            printf("Numero a buscar en el array\n");
            scanf("%d", &buscar);
            lugar = buscarValor(numero, A, buscar);
            if(lugar == -1)
            {
                printf("El valor ingresado no forma parte de este array\n");
            }
            else
            {
                printf("El numero se encuentra en la poscision: %d del vector\n", lugar);
            }
            break;
        case 5:
            ordenarVector(numero, A);
            mostrarArray(numero, A);
            break;
        case 6:
            continuar = 'n';
            break;
        default:
            printf("Ingrese una opcion valida\n");
            break;
        }
        system("pause");
        system("cls");
    }
    while(continuar == 's');
    return 0;
}
