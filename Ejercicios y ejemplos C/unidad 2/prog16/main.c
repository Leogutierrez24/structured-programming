#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define precio 15

void loadData(int *x){
    printf("¿Cuántas horas desea contratar? ");
    fflush(stdin);
    scanf("%d", x);
}

int extraHours(int x){
    return x / 5;
}

int main()
{
    setlocale(LC_ALL, "spanish");
    int totalHours = 0, bonusHours = 0, total = 0;
    int *ptr_totalHours = &totalHours;

    loadData(ptr_totalHours);
    bonusHours = extraHours(totalHours);
    total = totalHours * precio;

    printf("El total a pagar por %d horas es de $%d\nTiene %d horas gratis", totalHours, total, bonusHours);

    return 0;
}
