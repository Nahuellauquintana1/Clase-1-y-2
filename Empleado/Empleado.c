#include "Empleado.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int buscarLegajo(eEmpleado lista[], int tam, int legajo)
{
    int i;
    int indice = -1;
    for(i = 0; i<tam; i++)
    {
        if(lista[i].legajo == legajo)
        {
            indice = i;
        }
    }
    return indice;
}
void cargarEmpleado(eEmpleado lista[], int tam)
{
    int i;
    i = buscarLibre(lista, tam);
    if(i!=-1)
    {
        printf("Ingrese legajo: ");
        scanf("%d", &lista[i].legajo);
        printf("Ingrese nombre: ");
        fflush(stdin);
        gets(lista[i].nombre);
        printf("Ingrese sexo: ");
        fflush(stdin);
        scanf("%c", &lista[i].sexo);
        printf("Ingrese sueldo bruto: ");
        scanf("%f", &lista[i].sueldoBruto);
        lista[i].sueldoNeto =lista[i].sueldoBruto*0.85;
        lista[i].estado = OCUPADO;

    }
    else
    {
        printf("No hay espacio");
    }

}
void mostrarListaEmpleados(eEmpleado lista[], int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {
        if(lista[i].estado!=LIBRE)
        {
            mostrarEmpleado(lista[i]);
        }

    }
}
void mostrarEmpleado(eEmpleado unEmpleado)
{
    printf("%d-%s-%c-%.2f-%.2f\n", unEmpleado.legajo,unEmpleado.nombre, unEmpleado.sexo, unEmpleado.sueldoBruto,unEmpleado.sueldoNeto);

}
int buscarLibre(eEmpleado lista[], int tam)
{
    int i;
    int index=-1;
    for(i=0; i<tam; i++)
    {
        if(lista[i].estado==LIBRE)
        {
            index = i;
            break;
        }
    }
    return index;
}
void inicializarEmpleados(eEmpleado lista[], int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {
        lista[i].estado = LIBRE;
    }
}
void hardcodearDatosEmpleados(eEmpleado lista[], int tam)
{
    int i;
    int legajos[]={1,8,9,7,2,4};
    char nombres[][50]={"Carlos","Maria","Carlos","Pedro","Carlos","Mateo"};
    char sexo[]={'M','F','M','M','M','M'};
    float sueldosBruto[]={22000,22000,15000,4000,21000,6000};

    for(i=0; i<tam; i++)
    {
        lista[i].legajo = legajos[i];
        strcpy(lista[i].nombre, nombres[i]);
        lista[i].sexo = sexo[i];
        lista[i].sueldoBruto = sueldosBruto[i];
        lista[i].sueldoNeto = sueldosBruto[i] * 0.85;
        lista[i].estado = OCUPADO;

    }
}
int menuDeOpciones(char mensaje[])
{
    int opcion;
    printf("%s", mensaje);
    scanf("%d", &opcion);
    return opcion;
}
void modificar(eEmpleado lista[], int tam, int legajo)
{
    int flagExiste = 0;
    int indice;
    int sueldoBruto;
    indice = buscarLegajo(lista,tam,legajo);

    if(indice != -1)
    {
        lista[indice].sueldoBruto = sueldoBruto;
    }
    if(flagExiste == 0)
    {
        printf("No existe un empleado con ese legajo");
    }
}
int menuModificaciones(char mensaje[], eEmpleado lista[], int tam)
{
    int opcion;
    int legajo;
    printf("%s", mensaje);
    scanf("%d", &opcion);
    do
    {
        switch(opcion)
        {
        case 1:
            printf("Ingrese el legajo del Empleado que desea cambiar el nombre: ");
            scanf("%d", &legajo);
            break;
        case 2:
            printf("Ingrese el legajo del Empleado que desea cambiar el sexo: ");
            break;
        case 3:
            printf("Ingrese el legajo del Empleado que desea cambiar el SueldoBruto: ");
            scanf("%d", &legajo);
            modificar(lista,tam,legajo);
            opcion = 4;
            break;
        case 4:
            opcion = 4;
            break;
        default:
            printf("Por favor ingrese una opcion valida\n");
            break;
        }
    }
    while(opcion != 4);
return 0;
}
float sueldoMaximo(eEmpleado lista[], int tam)
{
    int i;
    float maximo;
    int flagmaximo = 0;
    for(i = 0; i < tam ; i++)
{
    if(lista[i].estado==OCUPADO)
    {
        if(flagmaximo == 0 || lista[i].sueldoBruto > maximo)
        {
            maximo = lista[i].sueldoBruto;
            flagmaximo = 1;
        }
    }
}
    return maximo;
}
void mostrarMaximo(eEmpleado lista[], int tam)
{
    float importeMaximo;
    int i;
    importeMaximo = sueldoMaximo(lista, tam);

    for(i = 0; i < tam; i++)
    {
        if(lista[i].sueldoBruto == importeMaximo && lista[i].estado == OCUPADO)
        {
            mostrarEmpleado(lista[i]);
        }
    }
}
void darBaja(eEmpleado lista[], int tam, int legajo)
{

}
