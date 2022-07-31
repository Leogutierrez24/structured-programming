#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "spanish");
    int a = 0;
    int b = 0;

    printf("Ingrese un n�mero: ");
    fflush(stdin);
    scanf("%d", &a);
    printf("Ingrese otro n�mero: ");
    fflush(stdin);
    scanf("%d", &b);

    if(a < b){
        do{
            system("cls");
            printf("�El primer n�mero debe ser mayor al segundo para continuar!\n");
            printf("Ingrese el primer n�mero: ");
            fflush(stdin);
            scanf("%d", &a);
            printf("Ingrese el segundo n�mero: ");
            fflush(stdin);
            scanf("%d", &b);
        }while(a < b);
    }
    printf("Los n�meros pares comprendidos entre %d y %d son:\n", b, a);
    for(int i = b; i <= a; i++){
        int pares = i % 2;
        if(pares == 0){
            printf("\t%d\n", i);
        }
    }

    return 0;
}
