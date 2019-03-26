#include "ingreso.h"
#include <stdio.h>
int pedirEntero(char texto [])
{
    int entero;
    printf("%s", texto);
    scanf("%d", &entero);
    return entero;
}
