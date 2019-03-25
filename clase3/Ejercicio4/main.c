#include <stdio.h>
#include <stdlib.h>

int Pedirnota(void)
{
    int nota;
    do
    {
        printf("Ingrese una nota: ");
        scanf("%d", &nota);
    }
    while(nota < 0 || nota > 10);
    return nota;
}
float Sacarpromedio(int suma, int cantidad)
{
    float promedio;
    promedio = (float)suma / cantidad;
    return promedio;
}
int Aprobarmateria(int Notaminima, int Nota){

    if(Nota <= Notaminima){
        return 0;
    }else{
        return 1;
    }
}
void Ejerciciouno(void)
{
    int i;
    int Totalaprobados;
    int TotalDesaprobados;
    int ContadorAprobados = 0;
    int ContadorDesaprobados = 0;
    float Promedioaprobados = 0;
    float Promediodesaprobados = 0;
    for(i = 0;i < 5; i++){
    if(Aprobarmateria(6, Pedirnota()) == 1){
        Totalaprobados += Pedirnota();
        ContadorAprobados++;
     }else{
        TotalDesaprobados += Pedirnota();
        ContadorDesaprobados++;
     }
    }
    Promedioaprobados = (float)Totalaprobados / ContadorAprobados;
    Promediodesaprobados = (float)TotalDesaprobados / ContadorDesaprobados;
    printf("Cantidad de aprobados: %d", ContadorAprobados);
    printf("Promedio aprobados: %f", Promedioaprobados);
    printf("Promedio desaprobados: %f", Promediodesaprobados);
    return 0;
}
int main()
{
    Ejerciciouno();
}
