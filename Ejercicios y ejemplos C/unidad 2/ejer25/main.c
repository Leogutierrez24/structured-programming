#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>

int main()
{
    /*Escriba un programa donde se ingrese el tiempo necesario para un cierto
      proceso en horas, minutos y segundos. Se calcule el costo total del proceso
      sabiendo que el costo por segundo es 0,25 pesos.*/
    system("cls");
    setlocale(LC_ALL, "spanish");

    int hours = 0;
    int minutes = 0;
    int seconds = 0;
    float finalCost = 0;

    printf("Ingrese la cantidad de horas que tardara el proceso: ");
    fflush(stdin);
    scanf("%d", &hours);
    printf("Ingrese la cantidad de minutos que tardara el proceso: ");
    fflush(stdin);
    scanf("%d", &minutes);
    printf("Ingrese la cantidad de segundos que tardara el proceso: ");
    fflush(stdin);
    scanf("%d", &seconds);

    // paso las horas y minutos a segundos
    hours = hours * 3600;
    minutes = minutes * 60;

    // calculo el precio final
    finalCost = ((float)hours + (float)minutes + (float)seconds) * 0.25;

    printf("El costo por el proceso es de: $%.2f\n", finalCost);
    return 0;
}
