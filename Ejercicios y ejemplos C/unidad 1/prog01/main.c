#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "spanish");
    int number = 0;
    printf("Ingrese un n�mero: ");
    fflush(stdin);
    scanf("%d", &number);
    printf("El n�mero ingresado es: %d", number);
    return 0;
}
