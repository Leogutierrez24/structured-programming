#include <stdio.h>
#include <stdlib.h>

int main()
{
    float kg = 0, gr = 0;
    printf("Ingrese la cant. de pan comprada (en kilos): ");
    fflush(stdin);
    scanf("%f", &kg);
    gr = kg * 1000;
    printf("La cant. de pan comprada es de %.2f gramos", gr);
    return 0;
}
