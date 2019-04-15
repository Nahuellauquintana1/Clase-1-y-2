#include <stdio.h>
#include <stdlib.h>
#define A 5
#define LIBRE 0
#define OCUPADO 1
typedef struct
{
    int legajo;
    char nombre[20];
    char sexo;
    float sueldoBruto;
    float sueldoNeto;
    int estado;
} eEmpleado;
void mostrarEmpleado(eEmpleado unEmpleado);
void pedirEmpleado(eEmpleado [], int tam);
void mostrarTodos(eEmpleado[], int tam);
void iniEstado(eEmpleado lista[], int tam);
int buscarLibre(eEmpleado lista[], int tam);
int buscarEmpleado(eEmpleado lista[], int tam, int legajo);
int bajaEmpleado(eEmpleado lista[], int tam, int legajo);
int main()
{
    eEmpleado lista[A];
    iniEstado(lista, A);
    int option;
    char continuar = 's';
do{
    printf("1.Cargar el Empleados\n");
    printf("2.Mostrar Empleados\n");
    printf("3.Buscar libre\n");
    printf("4.Salir\n");
    scanf("%d",&option);
    switch(option)
    {
    case 1:
        pedirEmpleado(lista, A);
        break;
    case 2:

        mostrarTodos(lista, A);
        break;
    case 3:
        buscarLibre(lista,A);
        break;
    case 4:
        continuar = 'n';
        break;
    default:
        printf("Ingrese una opcion valida\n");
        break;
    }
    system("pause");
    system("cls");
}while(continuar == 's');
return 0;
}

void mostrarTodos(eEmpleado lista[],int tam)
{
    int i;
    for(i = 0; i<tam; i++)
    {
        mostrarEmpleado(lista[i]);
    }
}
void iniEstado(eEmpleado lista[],int tam)
{
    int i;
    for(i = 0; i<tam; i++)
    {
        lista[i].estado = 0;
    }
}
void pedirEmpleado(eEmpleado lista[],int tam)
{
    int i;
    int indice;
    indice = buscarLibre(lista, A);
    do{
       for(i = 0; i<tam; i++)
    {
        printf("Ingrese nombre: ");
        fflush(stdin);
        gets(lista[i].nombre);
        printf("Ingrese legajo: ");
        scanf("%d", &lista[i].legajo);
        printf("Ingrese sexo: ");
        fflush(stdin);
        scanf("%c", &lista[i].sexo);
        printf("Ingrese sueldo bruto: ");
        scanf("%f", &lista[i].sueldoBruto);
        lista[i].sueldoNeto = lista[i].sueldoBruto*0.85;
    }
}while(indice != -1);
}
void mostrarEmpleado(eEmpleado unEmpleado)
{
    printf("%s\n%d\n%c\n%f\n%f\n", unEmpleado.nombre,unEmpleado.legajo, unEmpleado.sexo, unEmpleado.sueldoBruto,unEmpleado.sueldoNeto);
}
int buscarLibre(eEmpleado lista[], int tam)
{
    int i;
    int indice;
    for(i = 0; i<tam; i++)
    {
        if( lista[i].estado == 0 )
        {
            indice = i;
        }
    }
    indice = -1;
    return indice;
}
int buscarEmpleado(eEmpleado lista[], int tam, int legajo)
{
    int i;
    int indice;
    for(i = 0; i<tam; i++)
    {
        if(legajo == lista[i].legajo)
        {
            indice = i;
        }
    }
    indice = -1;
    return indice;
}

