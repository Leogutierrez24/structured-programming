#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void loadPrices(float *x, float *y, float *z){
    printf("Ingrese la cotización del dólar: ");
    fflush(stdin);
    scanf("%f", x);
    printf("Ingrese la cotización del euro: ");
    fflush(stdin);
    scanf("%f", y);
    printf("Ingrese la cant. de pesos a cotizar: ");
    fflush(stdin);
    scanf("%f", z);
}

void cotizaciones(float x, float y, float z){
    printf("PESOS\t\tDÓLARES\t\tEUROS\n");
    printf("%.2f\t\t%.2f\t\t%.2f", z, z / x, z / y);
}

int main()
{
    setlocale(LC_ALL, "spanish");
    float dollar = 0, euro = 0, money = 0;
    float *ptr_dollar = &dollar, *ptr_euro = &euro, *ptr_money = &money;
    loadPrices(ptr_dollar, ptr_euro, ptr_money);
    cotizaciones(dollar, euro, money);
}
