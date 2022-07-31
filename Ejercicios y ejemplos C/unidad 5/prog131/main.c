#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matriz[3][3];
    int i, j;
    int menor_fila01 = 0, menor_fila02 = 0, menor_fila03;
    int mayor_columna = 0;
    int p_silla = 0;

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            matriz[i][j] = rand() % 99 + 1;
        }
    }

    menor_fila01 = matriz[0][0];
    menor_fila02 = matriz[0][0];
    menor_fila03 = matriz[0][0];
    mayor_columna = matriz[0][0];

    // Punto Silla => cuando es el menor valor de la fila y el mayor de la columna
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            if(menor_fila01 > matriz[i][j] && i == 0){
                menor_fila01 = matriz[i][j];
            } else if (menor_fila02 > matriz[i][j] && i == 1){
                menor_fila02 = matriz[i][j];
            } else if(menor_fila03 > matriz[i][j] && i == 2){
                menor_fila03 = matriz[i][j];
            }
        }
    }

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%4d", matriz[i][j]);
        }
        printf("\n");
    }




    return 0;
}
