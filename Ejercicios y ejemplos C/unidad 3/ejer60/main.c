#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char variable[21];

    printf("Valores a ingresar dentro del string: \n");
    fflush(stdin);
    scanf("%s", &variable);
    printf("%s\n", variable);

    return 0;
}
