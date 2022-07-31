#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>
#include <string.h>

int main()
{
    system("cls");
    setlocale(LC_ALL, "spanish");

    char toCalculate[5] = "2 + 3";
    int x = 0;
    int y = 0;
    char operador = " ";

    /*printf("Ingrese la operación a desarrollar (Por ejemplo: n1 + n2): ");
    fgets(toCalculate);*/


    printf("%s", toCalculate[0]);

    return 0;
}
