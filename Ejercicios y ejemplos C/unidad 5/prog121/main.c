#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>

void loadData (int *num);
void showData (int num[]);

int main()
{
    setlocale(LC_ALL, "spanish");
    // var
    int i;
    int numbers[9];
    // pointers
    int *numbers_ptr = numbers;

    for(i = 0; i < 10; i++){
        numbers[i] = 0;
    }

    loadData(numbers_ptr);
    showData(numbers);

    return 0;
}

void loadData(int *num){
    printf("Ingrese los números a cargar:\n");
    fflush(stdin);
    for(int i = 0; i < 10; i++){
        scanf("%d", &num[i]);
    }
    system("cls");
}

void showData(int num[]){
    for(int i = 9; i >= 0; i--){
        printf("%d\n", num[i]);
    }
}
