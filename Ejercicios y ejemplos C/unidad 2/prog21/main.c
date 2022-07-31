#include <stdio.h>
#include <stdlib.h>

int main()
{
    float presupuesto = 0, urgencias = 0, pediatria = 0, traumatologia = 0;
    printf("Ingrese el presupuesto anual: $");
    fflush(stdin);
    scanf("%f", &presupuesto);
    printf("Ingrese el porcentaje del presupuesto que le corresponde a Urgencias: ");
    fflush(stdin);
    scanf("%f", &urgencias);
    printf("Ingrese el porcentaje del presupuesto que le corresponde a Pediatria: ");
    fflush(stdin);
    scanf("%f", &pediatria);
    printf("Ingrese el porcentaje del presupuesto que le corresponde a Traumatologia: ");
    fflush(stdin);
    scanf("%f", &traumatologia);

    urgencias /= 100;
    pediatria /= 100;
    traumatologia /= 100;

    printf("PRESUPUESTOS\nUrgencias\t$%.2f\nPediatria\t$%.2f\nTraumatologia\t$%.2f\n", presupuesto * urgencias, presupuesto * pediatria, presupuesto * traumatologia);

    return 0;
}
