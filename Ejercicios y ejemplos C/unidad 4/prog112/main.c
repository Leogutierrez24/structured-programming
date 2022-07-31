#include <stdio.h>
#include <stdlib.h>

int main()
{
    int counter = 0;
    for(int i = 1; i < 101; i++){
        printf("%4d", i);
        counter++;
        if(counter == 10){
            printf("\n");
            counter = 0;
        }
    }
    return 0;
}
