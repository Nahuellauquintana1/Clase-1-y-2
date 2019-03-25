#include <stdio.h>
#include <stdlib.h>

int sumar(void)
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

int main()
{
   int resultado;
   resultado = sumar();
   printf("El resultado es: %d", resultado);
    return 0;
}
