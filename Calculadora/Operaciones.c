
float Suma(int a, int b)
{
    return (float)a + b;
}

float Resta(int a, int b)
{
    return (float)a - b;
}

float Division(int a, int b)
{
    return (float)a / b;
}
float Multiplicacion(int a, int b)
{
    return (float)a * b;
}
int factorial(int numero)
{
    int resultado;
    if(numero == 0 || numero == 1)
    {
        resultado = 1;
    }
    else
    {
        resultado = numero * factorial(numero - 1);
    }
    return resultado;
}
