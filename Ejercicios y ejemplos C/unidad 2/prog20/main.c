#include <stdio.h>
#include <stdlib.h>
#define urgencias 0.37
#define pediatria 0.42
#define traumatologia 0.21

int main()
{
    float presupuesto = 0;
    printf("Ingrese el presupuesto anual: $");
    fflush(stdin);
    scanf("%f", &presupuesto);
    printf("PRESUPUESTOS\nUrgencias\t$%.2f\nPediatria\t$%.2f\nTraumatologia\t$%.2f\n", presupuesto * urgencias, presupuesto * pediatria, presupuesto * traumatologia);
    return 0;
}
