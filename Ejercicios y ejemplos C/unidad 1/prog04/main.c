#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "spanish");
    int x = 0, y = 0;
    printf("Ingrese un número: ");
    fflush(stdin);
    scanf("%d", &x);
    printf("Ingrese otro número: ");
    fflush(stdin);
    scanf("%d", &y);

    printf("OPERACIÓN\n%d + %d = %d", x, y, x + y);
    /*
    El programa 05 es igual nada más que pide resta y no suma.
    El programa 06 es igual nada más que pide división y no suma.
    El programa 07 es igual nada más que pide multiplicación y no suma.
    */
    return 0;
}
