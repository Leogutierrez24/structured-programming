#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "spanish");
    char str1[20];
    char str2[20];

    printf("Ingrese la primera oraci�n:\n");
    fflush(stdin);
    fgets(str1, 20, stdin);
    printf("Ingrese la segunda oraci�n:\n");
    fflush(stdin);
    fgets(str2, 20, stdin);

    int length1 = strlen(str1);
    int length2 = strlen(str2);

    printf("%s", str1);
    printf("La primera oraci�n mide: %d\n", length1);
    printf("La segunda oraci�n mide: %d\n", length2);

    return 0;
}
