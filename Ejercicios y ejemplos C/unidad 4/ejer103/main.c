#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Valores de la tabla ASCII desde el 32 hasta 164\n\n");
    for(int i = 0; i <= 164; i++){
        printf("%d %c\n", i, i);
    }
    return 0;
}
