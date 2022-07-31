#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

void rowCol(int *row, int *col){
    printf("Ingrese el números de filas de la matriz: \n");
    fflush(stdin);
    scanf("%d", row);
    printf("Ingrese el números de columnas de la matriz: \n");
    fflush(stdin);
    scanf("%d", col);
    system("cls");
}

void selectRowCol(int *row, int *col){
    printf("Ingrese un número de fila: \n");
    fflush(stdin);
    scanf("%d", row);
    printf("Ingrese un número de columna: \n");
    fflush(stdin);
    scanf("%d", col);
    system("cls");
}

int main()
{
    setlocale(LC_ALL, "spanish");
    int rows = 0;
    int cols = 0;
    int selectedRow = 0;
    int selectedCol = 0;
    int i, j;
    int highest = 0, sum = 0;
    int *ptr_rows = &rows;
    int *ptr_cols = &cols;
    int *ptr_selectedRow = &selectedRow;
    int *ptr_selectedCol = &selectedCol;

    rowCol(ptr_rows, ptr_cols);

    int matriz[rows][cols];
    for(i = 0; i < rows; i++){
        for(j = 0; j < cols; j++){
            matriz[i][j] = (rand() % 10) + 1;
        }
    }

    selectRowCol(ptr_selectedRow, ptr_selectedCol);

    highest = matriz[selectedRow - 1][0];
    for(i = 0; i < rows; i++){
       if(matriz[selectedRow - 1][i] >= highest){
            highest = matriz[selectedRow - 1][i];
       }
    }

    for(i = 0; i < rows; i++){
       sum += matriz[i][selectedCol - 1];
    }

    for(i = 0; i < rows; i++){
        for(j = 0; j < cols; j++){
            printf("%4d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("El número más grande la fila %d es %d\nLa suma de la columna %d es %d", selectedRow, highest, selectedCol, sum);

    return 0;
}
