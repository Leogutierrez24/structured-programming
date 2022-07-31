#include <stdio.h>
#include <stdlib.h>
#include <math.h> //libreria que tiene las funciones matemáticas

int main()
{
    double x = 0, y = 0, result = 0;

    printf("Ingrese la base a elevar: ");
    fflush(stdin);
    scanf("%lf", &x);
    printf("Ingrese la potencia: ");
    fflush(stdin);
    scanf("%lf", &y);
    result = pow(x, y);
    printf("El resultado de %.1lf ^ %.1lf es %.1lf", x, y, result);
    return 0;
}
