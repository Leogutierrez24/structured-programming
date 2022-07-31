#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

void chargeData(int* arr){
    for(int j = 0; j < 20; j++){
        printf("(%d) Ingrese un número: ", j + 1);
        fflush(stdin);
        scanf("%d", &arr[j]);
        system("cls");
    }
}

void correctOrder(int* arr){
    int aux = 0;
    for(int i = 0; i < 20 - 1; i++){
        for(int j = 0; j < 20 - i - 1; j++){
            if(arr[j]>arr[j+1]){
                aux = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = aux;
            }
        }
    }
}

int main()
{
    setlocale(LC_ALL, "spanish");
    int arr[20];
    int i;
    int* ptr_arr = &arr;

    for(i = 0; i < 20; i++){
        arr[i] = 0;
    }

    chargeData(ptr_arr);
    correctOrder(ptr_arr);

    for(i = 0; i < 20; i++){
        printf("%d  ", arr[i]);
    }


    return 0;
}
