#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "spanish");
    int x = 0;
    int y = 0;
    int sum = 0;
    int dif = 0;
    int prod = 0;

    printf("Ingrese un n�mero:\n");
    fflush(stdin);
    scanf("%d", &x);

    if(x >= 0){
        printf("Ingresa otro n�mero:\n");
        fflush(stdin);
        scanf("%d", &y);
        sum = x + y;
        dif = x - y;
        prod = x * y;
        printf("Los n�meros ingresados son: %d y %d\nLa suma es: %d\nLa resta es: %d\nEl producto es: %d\n", x, y, sum, dif, prod);
    } else {
        printf("Hasta ac� llegaste fiera ;)");
    }
    return 0;
}
