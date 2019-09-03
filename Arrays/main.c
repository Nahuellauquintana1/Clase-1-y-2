#include <stdio.h>
#include <stdlib.h>
#include "Dll.h"
#define T 10


int main()
{
    int vectorDeNumeros[T];
    float promedioPositivos;
    int option;
    char continuar = 's';
    do
    {
        printf("1.Cargar Todo\n", vectorDeNumeros);
        printf("2.Mostrar Todo\n");
        printf("3.Mostrar todos los Negativos\n");
        printf("4.Mostrar todos los positivos\n");
        printf("5.Mostrar Promedio Positivos\n");
        printf("6.Mostrar Max/Min\n");
        printf("7.Salir\n");
        scanf("%d",&option);
        switch(option)
        {
        case 1:
            vectorDeNumeros = cargarArray(vectorDeNumeros, T);
            break;
        case 2:
            mostrarArray(vectorDeNumeros, T);
            break;
        case 3:

            break;
        case 4:

            break;
        case 5:
            //Saca promedio
            promedioPositivos = sacarPromedio(vectorDeNumeros, T);
            printf("\n\n\PROMEDIO DE POSITIVOS: %f\n\n", promedioPositivos);
            break;
        case 6:
            calcularMostrarMaxMin(vectorDeNumeros, T);
            break;
        case 7:
            //cambia el valor de Continuar para salir del programa.
            continuar = 'n';
            break;
        default:
            //Opciones invalidas
            printf("Ingrese una opcion valida\n");
            break;
        }
        system("pause");
        system("cls");
    }while(continuar == 's');
    return 0;


}
