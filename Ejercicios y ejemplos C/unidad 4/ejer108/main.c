#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "spanish");
    int a = 0;
    int divisiones = 0;
    int divisible = 0;
    printf("Ingrese un número: ");
    fflush(stdin);
    scanf("%d", &a);

    //divído el n° y el resto es 0 lo sumo a divisible
    for(int i = 1;i <= a; i++){
        divisiones = a % i;
        if(divisiones == 0){
            divisible++;
        }
    }

    printf("%d\n", divisible);

    if(divisible <= 2){
        // si el n° solo es divisible por si mismo y por uno (divisible = 2) es primo
        printf("El número ingresado es primo");
    } else {
        // si el n° es divisible por más de 2 números no es primo
        printf("El número ingresado no es primo");
    }
    return 0;
}
