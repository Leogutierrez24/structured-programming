#include <stdio.h>
#include <stdlib.h>
#define interes 1.27

void loadData(float* x){
    printf("Ingrese la cant. de dinero que desea solicitar: ");
    fflush(stdin);
    scanf("%f", x);
}

float calcInteres(float x){
    return x * interes;
}

int main()
{
    float prestamo = 0;
    float* ptr_prestamo = &prestamo;
    loadData(ptr_prestamo);
    printf("Con un prestamo de $ %.2f tendra que pagar $ %.2f", prestamo, calcInteres(prestamo));
    return 0;
}
