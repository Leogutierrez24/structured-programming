#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "spanish");
    int number = 0;
    printf("Ingrese un número: ");
    fflush(stdin);
    scanf("%d", &number);
    printf("El número ingresado es: %d", number);
    return 0;
}
