#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>
int main()
{
    setlocale(LC_ALL, "spanish");

    int number = 0;
    int total = 0;
    float average = 0.0;

    for(int i = 0; i < 10; i++){
        printf("Ingrese un número: ");
        fflush(stdin);
        scanf("%d", &number);
        total += number;
        system("cls");
    }
    average = (float)total / (float)10;
    printf("El promedio de los números ingresados es: %.2f", average);

    return 0;
}
