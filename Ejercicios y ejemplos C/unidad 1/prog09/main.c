#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double x = 0, result = 0;

    printf("Ingrese la base a elevar: ");
    fflush(stdin);
    scanf("%lf", &x);
    result = sqrt(x);
    printf("La raiz cuadrada de %.1lf es %.1lf", x, result);
    return 0;
}
