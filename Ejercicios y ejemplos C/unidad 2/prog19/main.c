#include <stdio.h>
#include <stdlib.h>
#define aumento 0.08
#define descuento 0.025

int main()
{
    float salario = 0, servicios = 0, incremento = 0;

    printf("Ingrese su salario: ");
    fflush(stdin);
    scanf("%f", &salario);

    incremento = salario * aumento;
    salario += incremento;
    servicios = salario * descuento;
    salario -= servicios;

    printf("Su sueldo con el aumento y el descuento es de: $%.2f", salario);
    return 0;
}
