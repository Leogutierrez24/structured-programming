#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "spanish");
    char name[20] = "";
    printf("Ingrese su nombre: ");
    fflush(stdin);
    scanf("%s", name);
    printf("Buen día %s", name);
    return 0;
}
