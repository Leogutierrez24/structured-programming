#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "spanish");
    int number = 0;
    int counter = 0;
    printf("Ingrese un número: ");
    fflush(stdin);
    scanf("%d", &number);
    for(int i = 0; i < number; i++){
        counter++;
        printf("* ");
        if(counter == 5){
            printf("\n");
            counter = 0;
        };
    }
    return 0;
}
