#include <stdio.h>
#include <stdlib.h>

/*Prototipo o signature
tipo de dato identificador ([paramaetros]);
ie: int Sumarnumeros(int unnumero, int otronuero)
*/
int suma(int, int);
int main()
{
    int numero1;
    int numero2;
    int resultado;

    printf("Ingrese un numero: ");
    scanf("%d", &numero1);
    printf("Ingrese un numero: ");
    scanf("%d", &numero2);

    resultado = suma(numero1, numero2);
    printf("El resultado es: %d", resultado);
    return 0;
}

int suma(int numero1, int numero2)
{
    int resultado;

    resultado = numero1 + numero2;

    return resultado;
}
