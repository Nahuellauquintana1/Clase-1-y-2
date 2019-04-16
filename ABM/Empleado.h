#include <stdio.h>
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

void mostrarEmpleado(eEmpleado);
void cargarEmpleado(eEmpleado[], int);
void mostrarListaEmpleados(eEmpleado[], int);
int buscarLibre(eEmpleado[], int);
void inicializarEmpleados(eEmpleado[], int);
void hardcodearDatosEmpleados(eEmpleado[], int);
int menuDeOpciones(char[]);
int menuModificaciones(char[], eEmpleado[],int);
void modificar(eEmpleado[], int, int);
void baja(eEmpleado[], int, int);
int buscarLegajo(eEmpleado lista[], int tam, int legajo);
