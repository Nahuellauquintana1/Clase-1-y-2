#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*insert numbers till the user wants to stop, not 0
    inform: quantity numbers
            % 2 == 0
            positive +=
            negative / i
            max / min
            positive min
            negative max
            numbers between -10 && 50
            numbers / i

            */

int main()
{
    int contador = 0;
    int contadorpares = 0;
    int contadornegativo = 0;
    int contador2 = 0;
    int flag = 0;
    int flag2 = 0;
    int flag3 = 0;
    int sumanegativo;
    int maximo;
    int minimo;
    int minpositivo;
    int maxnegativo;
    int numero;
    int sumapositivo;
    char respuesta;

    do
    {

        printf("Ingrese un numero");
        scanf("%d", &numero);

        while(numero == 0)
        {
            printf("Ingrese un numero distinto de 0");
            scanf("%d", &numero);
        }
        if(numero > 0)
        {
            sumapositivo = sumapositivo + numero;

        }
        else
        {
            sumanegativo = sumanegativo + numero;
            contadornegativo++;
        }
        if(numero > -10 && numero < 50)
        {
            contador2++;
        }
        if(numero > maximo || flag == 0)
        {
            numero = maximo;
        }
        if(numero < minimo || flag == 0)
        {
            numero = minimo;
            flag == 1;
        }
        if(numero % 2 == 0 )
        {
            contadorpares++;
        }












        contador++;
    }while(respuesta == 's');


       // promedio aca
        return 0;
}
