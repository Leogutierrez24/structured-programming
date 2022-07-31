#include <stdio.h>
#include <stdlib.h>

int main()
{
    int variableGlobal;

    int first(){
        variableGlobal = 5;
        printf("El valor de la variable es: %i\n", variableGlobal);
        return 0;
    }

    int second(){
        variableGlobal = 10;
        printf("El nuevo valor de la variable es: %i\n", variableGlobal);
        return 0;
    }

    first();
    second();
    return 0;
}
