#include <stdio.h>
#include <stdlib.h>

int main()
{
    // inicializo en 0
    int positivos = 0;
    int negativos = 0;
    int numbers[5][5];
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            numbers[i][j] = 0;
        }
    }
    // cargo numbers con n�meros
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            if(i % 2 == 0){
                numbers[i][j] = i + 2;
            } else {
                numbers[i][j] = i - 5;
            }
        }
    }
    //imprimo numbers
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            printf("%4d ", numbers[i][j]);
        }
        printf("\n");
    }

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            if(numbers[i][j] <= 0){
                negativos += numbers[i][j];
            } else {
                positivos += numbers[i][j];
            }
        }
    }

    printf("La suma de los valores positivos es de: %d\nLa suma de los valores negativos es de: %d\n", positivos, negativos);

    return 0;
}

for(int i = 0; i < 5; i++){
    for(int j = 0; j < 5; j++){
        printf("Ingrese los números de la fila %d columna %d", i + 1, j + 1);
        scanf("%d", matriz_[i][j]);
        system("cls");
    }
}