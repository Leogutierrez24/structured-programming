#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

void loadData(int *num, int *x, int *y){
    printf("Ingrese el número que desea ingresar:\n");
    for(int i = 0; i < 15; i++){
        fflush(stdin);
        scanf("%d", &num[i]);
    }
    system("cls");
    printf("Ingrese un número al azar: ");
    fflush(stdin);
    scanf("%d", x);
    system("cls");
    printf("Ingrese otro número al azar: ");
    fflush(stdin);
    scanf("%d", y);
    system("cls");
}

void checkNumbers(int num[], int x, int y){
    int checkX = 0;
    int checkY = 0;
    for(int i = 0; i < 15; i++){
        if(num[i] == x) checkX = 1;
        if(num[i] == y) checkY = 1;
    }
    if(checkX == 0 && checkY == 0){
        printf("%d y %d no estan en el array\n", x, y);
    } else if (checkX == 1 && checkY == 0){
        printf("%d esta en el array\n", x);
    } else if (checkX == 0 && checkY == 1){
        printf("%d esta en el array\n", y);
    } else {
        printf("%d y %d estan en el array\n", x, y);
    }
}

int main()
{
    setlocale(LC_ALL, "spanish");
    int numbers[15];
    int firstNum = 0;
    int secondNum = 0;

    int *num_ptr = numbers;
    int *x_ptr = &firstNum;
    int *y_ptr = &secondNum;

    for(int i = 0; i < 15; i++){
        numbers[i] = 0;
    }

    loadData(num_ptr, x_ptr, y_ptr);
    for(int i = 0; i < 15; i++){
        printf("%d ", numbers[i]);
    }
    printf("\n");
    checkNumbers(numbers, firstNum, secondNum);

    return 0;
}
