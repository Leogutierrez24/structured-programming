#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define precio 10.50

void loadData(float *x){
    printf("Ingrese la cant. de kilómetros que desea recorrer: ");
    fflush(stdin);
    scanf("%f", x);
}

float calculate(float x){
    return x * precio;
}

int main()
{
    setlocale(LC_ALL, "spanish");
    float cantKm = 0;
    float *ptr_cantKm = &cantKm;

    loadData(ptr_cantKm);
    printf("El boleto de viaje costara: $ %.2f", calculate(cantKm));
    return 0;
}
