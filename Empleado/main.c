#include <stdlib.h>
#include "Empleado.h"
#define T 10

int menuDeOpciones(char[]);

int main()
{
    int opcion;
    eEmpleado lista[T];
    inicializarEmpleados(lista,T);
    hardcodearDatosEmpleados(lista,6);
    do
    {
        opcion = menuDeOpciones("1.Alta\n2.Baja\n3.Modificar\n4.Mostrar\n5.Informar\n6.Salir\nElija una opcion: ");
        switch(opcion)
        {
        case 1:
            cargarEmpleado(lista,  T);
            break;
        case 2:

            break;
        case 3:
            menuModificaciones("1:Modificar Nombre\n2:Modificar Sexo\n3:Modificar Sueldo Bruto\n4:Salir al menu anterior\nElija una opcion: ", lista, T);
            break;
        case 4:
            mostrarListaEmpleados(lista, T);
            break;
        case 5:
            mostrarMaximo(lista,T);

            break;
        case 6:
            printf("Salir\n");
            opcion = 6;
            break;
        }
    }
    while(opcion!=6);
    return 0;
}
