#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[3][4];
    int traspuesta[4][3];
    int i, j, x = 1;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 4; j++){
            arr[i][j] = x;
            x++;
        }
    }

    for(i = 0; i < 3; i++){
        for(j = 0;j < 4; j++){
            printf("%4d", arr[i][j]);
        }
        printf("\n");
    }

    for(i = 0; i < 4; i++){
        for(j = 0;j < 3; j++){
            traspuesta[i][j] = arr[j][i];
        }
    }
    printf("\n");
    for(i = 0; i < 4; i++){
        for(j = 0;j < 3; j++){
            printf("%4d", traspuesta[i][j]);
        }
        printf("\n");
    }
    return 0;
}
