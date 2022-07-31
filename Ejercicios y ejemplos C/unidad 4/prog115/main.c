#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "spanish");

    int number = 0;
    int factorial = 0;
    printf("Ingrese un número: ");
    fflush(stdin);
    scanf("%d", &number);

    if(number == 0){
        factorial = 0;
    } else {
        factorial++;
    }

    for(int i = 1; i <= number; i++){
        factorial *= i;
    }

    printf("%d! = %d", number, factorial);
    return 0;
}
