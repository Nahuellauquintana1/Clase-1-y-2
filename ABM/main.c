#include <stdlib.h>
#include "Empleado.h"
#define T 10
//funcion recibe array y el numero de legajo y pedir al usuario que reeingrese el sueldo bruto


int menuDeOpciones(char[]);

int main()
{
    //int indice;
    int opcion;
    //int legajo;
    eEmpleado lista[T];
    inicializarEmpleados(lista,T);
    hardcodearDatosEmpleados(lista,4);
    do
    {
        opcion = menuDeOpciones("1.Alta\n2.Baja\n3.Modificar\n4.Mostrar\n5.Salir\nElija una opcion: ");
        switch(opcion)
        {
        case 1:
            cargarEmpleado(lista,  T);
            break;
        case 3:
            menuModificaciones("1:Modificar Nombre\n2:Modificar Sexo\n3:Modificar Sueldo Bruto\n4:Salir al menu anterior\nElija una opcion: ", lista, T);

            break;
        case 4:
            mostrarListaEmpleados(lista, T);
            break;
        case 5:
            printf("Salir\n");
            opcion = 5;
            break;
        }
    }
    while(opcion!=5);

    //inicializarEmpleados(lista, T);
    return 0;
}
