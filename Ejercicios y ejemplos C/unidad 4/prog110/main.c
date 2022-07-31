#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "spanish");

    int actNumber = 0;
    int nextNumber = 1;
    int operation = 0;
    int userNumber = 0;

    printf("Ingrese un número: ");
    fflush(stdin);
    scanf("%d", &userNumber);

    printf("%d\n", actNumber);
    printf("%d\n", nextNumber);
    for(int i = 0; i <= 25; i++){
        operation = actNumber + nextNumber;
        if(operation <= userNumber) printf("%d\n", operation);
        actNumber = nextNumber;
        nextNumber = operation;
    }
    return 0;
}
