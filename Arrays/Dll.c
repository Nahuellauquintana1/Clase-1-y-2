#include <stdio.h>
#include <stdlib.h>
#include "Dll.h"

void cargarArray(int arrayNumeros[], int tam)
{
    int i;
    printf("\tCARGA DE DATOS\n");
    for(i=0; i<tam; i++)
    {
        printf("Ingrese un numero: ");
        scanf("%d", &arrayNumeros[i]);
    }

}
void mostrarArray(int arrayNumeros[], int tam)
{
            int i;
            printf("\tMUESTRO EL VECTOR\n");
            for(i=0; i<tam; i++)
            {
                printf("%d\n", arrayNumeros[i]);
            }

}

void calcularMostrarMaxMin(int arrayNumeros[], int tam)
{
            int i;
            int maximo;
            int minimo;
            for(i = 0; i<tam ; i++)
            {
                if(maximo < arrayNumeros[i] || i == 0)
                {
                    maximo = arrayNumeros[i];
                }
            }
            for(i = 0; i<tam ; i++)
            {
                if(minimo > arrayNumeros[i] || i == 0)
                {
                    minimo = arrayNumeros[i];
                }
            }
            for(i = 0 ; i<tam; i ++)
            {
                if(maximo == arrayNumeros[i])
                {
                    printf("%d", i);
                }
            }
            for(i = 0 ; i<tam; i ++)
            {
                if(minimo == arrayNumeros[i])
                {
                    printf("%d", i);
                }
            }
            printf("MAXIMO: %d -- MINIMO: %d", maximo, minimo);

}
int sacarPromedio(int arrayNumeros[], int tam)
{
           int i;
           int suma;
           int contador;
           int promedio;
           for(i=0; i<tam; i++)
            {
                if(arrayNumeros[i]>0)
                {
                    suma += arrayNumeros[i];
                    contador++;
                }
            }
            promedio = (float)suma/contador;

            return promedio;
}
