#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

int main()
{

    setlocale(LC_ALL, "spanish");
    int cantNumeros = 0;
    int nPares = 0;
    int nImpares = 0;
    int nMayor = 0;
    int nMenor = 0;

    printf("¿Qué cantidad de números desea ingresar?: ");
    fflush(stdin);
    scanf("%d", &cantNumeros);
    system("cls");

    int numbers[cantNumeros];

    for(int i = 0; i < cantNumeros; i++){
        printf("Ingrese el número que desea agregar: ");
        fflush(stdin);
        scanf("%d", &numbers[i]);
    }
    system("cls");

    nMayor = numbers[0];
    nMenor = numbers[0];

    for(int i = 0; i < cantNumeros; i++){
        if(numbers[i] % 2 == 0){
            nPares += 1;
        } else {
            nImpares += 1;
        }
    }

    for(int i = 0; i < cantNumeros; i++){
        if(numbers[i] > nMayor){
            nMayor = numbers[i] ;
        }
    }

    for(int i = 0; i < cantNumeros; i++){
        if(numbers[i] < nMenor){
            nMenor = numbers[i] ;
        }
    }

    printf("Números ingresados:\n");
    for(int i = 0; i < cantNumeros; i++){
        printf("%d\n", numbers[i]);
    }

    printf("La cant. de números pares es de: %d\nLa cant. de números impares es de: %d\nEl mayor número es: %d\nEl menor número es: %d\n", nPares, nImpares, nMayor, nMenor);

    return 0;
}
