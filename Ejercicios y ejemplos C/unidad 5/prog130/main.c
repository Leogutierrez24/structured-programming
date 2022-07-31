#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "spanish");
    int matriz[3][3];
    int salir = 1;
    int row_1 = 0, row_2 = 0, row_3 = 0;
    int col_1 = 0, col_2 = 0, col_3 = 0;
    int diag_1 = 0, diag_2 = 0;
    int condicion01 = 0;
    int condicion02 = 0;
    int condicion03 = 0;

    for(int i = 0;i < 3; i++){
        for(int j = 0;j < 3; j++){ // carga con datos la matriz
            do{
                printf("Ingrese un valor para la fila %d columna %d: ", i + 1, j + 1);
                fflush(stdin);
                scanf("%d", &matriz[i][j]);
                if(matriz[i][j] < 1 || matriz[i][j] > 9){
                    printf("Los valores deben estar entre 1 y 9!!");
                    system("pause");
                } else {
                    salir = 0;
                }
            } while (salir == 1);
            salir = 1;
        }
    }
    system("cls");

    row_1 = matriz[0][0] + matriz[0][1] + matriz[0][2];
    row_2 = matriz[1][0] + matriz[1][1] + matriz[1][2];
    row_3 = matriz[2][0] + matriz[2][1] + matriz[2][2];
    if(row_1 == row_2 && row_2 == row_3) condicion01 = 1;

    col_1 = matriz[0][0] + matriz[1][0] + matriz[2][0];
    col_2 = matriz[0][1] + matriz[1][1] + matriz[2][1];
    col_3 = matriz[0][2] + matriz[1][2] + matriz[2][2];
    if(col_1 == col_2 && col_2 == col_3) condicion02 = 1;

    diag_1 = matriz[0][0] + matriz[1][1] + matriz[2][2];
    diag_2 = matriz[2][0] + matriz[1][1] + matriz[0][2];
    if(diag_1 == diag_2) condicion03 = 1;

    for(int i = 0;i < 3; i++){ // imprime la matriz por consola
        for(int j = 0;j < 3; j++){
            printf("%4d", matriz[i][j]);
        }
        printf("\n");
    }

    if(condicion01 == 1 && condicion02 == 1 && condicion03 == 1){
        printf("Es un cuadrado mágico");
    } else {
        printf("No es un cuadrado mágico");
    }

    return 0;
}
