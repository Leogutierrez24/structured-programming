#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "spanish");
    int x = 0, y = 0;
    printf("Ingrese un n�mero: ");
    fflush(stdin);
    scanf("%d", &x);
    printf("Ingrese otro n�mero: ");
    fflush(stdin);
    scanf("%d", &y);

    printf("OPERACI�N\n%d + %d = %d", x, y, x + y);
    /*
    El programa 05 es igual nada m�s que pide resta y no suma.
    El programa 06 es igual nada m�s que pide divisi�n y no suma.
    El programa 07 es igual nada m�s que pide multiplicaci�n y no suma.
    */
    return 0;
}
