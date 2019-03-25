#include <stdio.h>
#include <stdlib.h>

void suma(int, int);

int main()
{
    int resultado;
    int numero1;
    int numero2;
    resultado = int suma(int numero1, int numero2);


    printf("El resultado es: %d", resultado);
    return 0;
}

int suma(void)
{
    int numero1;
    int numero2;
    int resultado;

    printf("Ingrese un numero: ");
    scanf("%d", &numero1);
    printf("Ingrese un numero: ");
    scanf("%d", &numero2);

    resultado = numero1 + numero2;

    return resultado;
}
