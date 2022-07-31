#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "spanish");
    int a = 0;
    int divisiones = 0;
    int divisible = 0;
    printf("Ingrese un n�mero: ");
    fflush(stdin);
    scanf("%d", &a);

    //div�do el n� y el resto es 0 lo sumo a divisible
    for(int i = 1;i <= a; i++){
        divisiones = a % i;
        if(divisiones == 0){
            divisible++;
        }
    }

    printf("%d\n", divisible);

    if(divisible <= 2){
        // si el n� solo es divisible por si mismo y por uno (divisible = 2) es primo
        printf("El n�mero ingresado es primo");
    } else {
        // si el n� es divisible por m�s de 2 n�meros no es primo
        printf("El n�mero ingresado no es primo");
    }
    return 0;
}
