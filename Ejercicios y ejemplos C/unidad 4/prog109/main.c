#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "spanish");

    int nextNumber = 0;
    int actNumber = 0;
    int operation = 0;
    printf("Ingrese un número: ");
    fflush(stdin);
    scanf("%d", &actNumber);


    if(actNumber <= 0){
        nextNumber += 1;
        printf("%d\n", actNumber);
        printf("%d\n", nextNumber);
        for(int i = 0; i <= 100; i++){
            operation = actNumber + nextNumber;
            printf("%d\n", operation);
            actNumber = nextNumber;
            nextNumber = operation;
        }
    } else {
        nextNumber = actNumber + 1;
        printf("%d\n", actNumber);
        printf("%d\n", nextNumber);
        for(int i = 0; i <= 100; i++){
            operation = actNumber + nextNumber;
            printf("%d\n", operation);
            actNumber = nextNumber;
            nextNumber = operation;
        }
    }

    return 0;
}
