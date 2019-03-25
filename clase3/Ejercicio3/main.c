#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero1;
    int numero2;
    int resultado;

    printf("Ingrese un numero: ");
    scanf("%d", &numero1);
    printf("Ingrese un numero: ");
    scanf("%d", &numero2);

    resultado = numero1 + numero2;

    printf("El resultado es: %d", resultado);
}
