#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char nombre[100];
    int lenght;

    printf("Ingrese un nombre y apellido: \n");
    strcat()//Concatenapalabras
    //strupr()Funcion que convierte todo a mayuscula
    //strlwr() Funcion que convierte todo a minuscula
    stricmp()//Es key sensitive no distingue entre mayus y minusculas
    //strcmp(palabra, "philipa");(devuelve entero SI < 0   si == 0 cuando son iguales si > 0
    //strncpy(nombre, otronombre, "canitdad de datos que quiero guardar(concuerda con el tamaño del vector destino-1)")
    //scanf("%[^\n]", palabra) funciona tanto en linux como en windows;
    //fgets(nombre, 1024, stdin); Works in both linux and windows;
    gets(nombre);//solo funciona en windows;

    lenght = strlen(nombre);

    printf("Su nombre es: %s \ny la cantidad de letras es: %d", nombre,lenght);
   return 0;
}
