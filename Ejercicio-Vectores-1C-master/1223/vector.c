#include "vector.h"
#include <stdio.h>
#include <stdlib.h>
void cargarArray(int numero[], int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {
        printf("ingrese un numero: ");
        scanf("%d", &numero[i]);
    }

}
void mostrarArray(int numero[],int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {
        printf("%d\n", numero[i]);
    }

}

int maximoArray(int numero[], int tam)
{
    int i;
    int maximo;
    int flag = 0;
    for(i=0; i<tam; i++)
    {
        if(flag == 0 || maximo < numero[i])
        {
            maximo = numero[i];
            flag = 1;
        }

    }
    return maximo;
}
int buscarValor(int numero[], int tam, int valor)
{
    int i;
    for (i = 0; i< tam; i++)
    {
        if(numero[i] == valor)
        {
            return i;
        }
    }
    return -1;
}

void ordenarVector(int numero[], int tam)
{
    int i, p;
    int aux;
    for (i = 0; i<tam-1; i++)
    {
        for(p=i+1; p<tam; p++)
        {
            if(numero[i]>numero[p])//criterio de organizacion
            {
                aux = numero[i];
                numero[i] = numero[p];
                numero[p] = aux;
            }
        }
    }

}
