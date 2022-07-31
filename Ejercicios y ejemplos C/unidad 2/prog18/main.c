#include <stdio.h>
#include <stdlib.h>
#define descuento 35
int main()
{
    float price = 0, discount = 0, total = 0;
    printf("Ingrese el monto del producto: ");
    fflush(stdin);
    scanf("%f", &price);
    discount = price * descuento / 100;
    total = price - discount;
    printf("El total a pagar es de: $%.2f", total);
    return 0;
}
