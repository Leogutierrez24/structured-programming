#include <stdio.h>
#include <stdlib.h>

int main()
{
    char chart = ' ';
    printf("Ingrese un caracter: ");
    fflush(stdin);
    scanf("%c", &chart);
    printf("El caracter ingresado es: %c", chart);
    return 0;
}
