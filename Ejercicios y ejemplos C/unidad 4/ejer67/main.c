#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "spanish");
    int numValue = 0;
    int checkValue = 0;
    printf("Ingrese un n�mero:\n");
    fflush(stdin);
    scanf("%d", &numValue);
    checkValue = numValue % 2;

    if(checkValue == 0){
        printf("El %d es un n�mero par.\n", numValue);
    } else {
        printf("El %d es un n�mero inpar.\n", numValue);
    }
    return 0;
}
