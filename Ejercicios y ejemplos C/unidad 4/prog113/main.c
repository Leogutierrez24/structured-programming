#include <stdio.h>
#include <stdlib.h>

int main()
{
    int counter = 0;
        for(int j = 0; j < 11; j++){
            for(int k = 0; k < 11; k++){
                printf("%4d", j * k);
                counter++;
                if(counter == 11){
                    printf("\n");
                    counter = 0;
                }
            }
    }
    return 0;
}
