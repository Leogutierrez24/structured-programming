#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int power = 2;
    double currentNumber = 0;
    double powResult = 0;
    double finalResult = 0;
    for(int i = 0; i < 100; i++){
        currentNumber++;
        powResult = pow(currentNumber, (double)power);
        finalResult += powResult;
    }

    printf("Resultado: %lf", finalResult);
    return 0;
}
