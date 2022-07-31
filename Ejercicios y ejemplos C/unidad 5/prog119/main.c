#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "spanish");
    int numbers[10] = {5, 6, 7, 8, 9, 1, 2, 10, 4, 3};
    int nPares = 0;
    int nImpares = 0;
    int nMayor = 1;
    int nMenor = 1;

    for(int i = 0; i < 10; i++){
        if(numbers[i] % 2 == 0){
            nPares += 1;
        } else {
            nImpares += 1;
        }
    }

    for(int i = 0; i < 10; i++){
        if(numbers[i] > nMayor){
            nMayor = numbers[i] ;
        }
    }

    for(int i = 0; i < 10; i++){
        if(numbers[i] < nMenor){
            nMenor = numbers[i] ;
        }
    }

    printf("La cant. de números pares es de: %d\nLa cant. de números impares es de: %d\nEl mayor número es: %d\nEl menor número es: %d\n", nPares, nImpares, nMayor, nMenor);



    return 0;
}
