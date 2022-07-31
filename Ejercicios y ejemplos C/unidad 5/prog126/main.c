#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main()
{
    setlocale(LC_ALL, "spanish");
    int matriz[4][3];
    int big = 0;
    int low = 0;
    int bigRow = 0;
    int bigCol = 0;
    int lowRow = 0;
    int lowCol = 0;

    for(int i = 0;i < 4; i++){
        for(int j = 0;j < 3; j++){
            matriz[i][j] = (rand() % (99 - 10 + 1)) + 10;
        }
    }

    big = matriz[0][0];
    low = matriz[0][0];

    for(int i = 0;i < 4; i++){
        for(int j = 0;j < 3; j++){
            if(big < matriz[i][j]){
                big = matriz[i][j];
                bigRow = i + 1;
                bigCol = j + 1;
            }
        }
    }

    for(int i = 0;i < 4; i++){
        for(int j = 0;j < 3; j++){
            if(low > matriz[i][j]){
                low = matriz[i][j];
                lowRow = i + 1;
                lowCol = j + 1;
            }
        }
    }

    for(int i = 0;i < 4; i++){
        for(int j = 0;j < 3; j++){
            printf("%4d", matriz[i][j]);
        }
        printf("\n");
    }

    printf("El valor más bajo de la matriz es: %d fila %d columna %d\n", low, lowRow, lowCol);
    printf("El valor más alto de la matriz es: %d fila %d columna %d\n", big, bigRow, bigCol);

    return 0;
}
