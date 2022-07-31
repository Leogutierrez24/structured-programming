#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

int main()
{
    setlocale(LC_ALL, "spanish");
    int calif = 0;
    int salir = 1;
    do{
        printf("Ingrese la nota del alumno: ");
        fflush(stdin);
        scanf("%d", &calif);
        if(calif<=0 || calif > 10){
            printf("La nota debe estar entre 1 y 10\n");
            system("pause");
            system("cls");
        } else {
            salir = 0;
        }
    } while(salir == 1);

    if(calif <= 3){
        printf("La calificación es insuficiente.");
    } else if (calif <= 6){
        printf("La calificación es aprobado.");
    } else if(calif <= 9){
        printf("La calificación es notable.");
    } else {
        printf("La calificación es sobresaliente.");
    }
    return 0;
}
