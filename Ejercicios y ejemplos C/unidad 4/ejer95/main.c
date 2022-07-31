#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

int main()
{
    /*
    Consigna: Desarrollar un programa que permita ingresar el día y mes de nacimiento
    de una persona y muestre en pantalla a que signo pertenece.
    */
    system("cls");
    setlocale(LC_ALL, "spanish");
    int day = 0;
    int month = 0;

    printf("Ingrese el día de su nacimiento: ");
    fflush(stdin);
    scanf("%d", &day);
    printf("Ingrese el mes de su nacimiento: ");
    fflush(stdin);
    scanf("%d", &month);

    if(day < 1 || day > 31){
        printf("La fecha esta mal pá'\n");
    } else if(month < 1 || month > 12){
        printf("El mes esta mal pá'\n");
        } else {
            if((day >= 22 && month == 12) || (day <= 20 && month == 1)){
                printf("Tu signo es Capricornio.\n");
            } else if((day >= 21 && month == 1) || (day <= 19 && month == 2)){
                printf("Tu signo es Acuario.\n");
            } else if((day >= 20 && month == 2) || (day <= 20 && month == 3)){
                printf("Tu signo es Piscis.\n");
            } else if((day >= 21 && month == 3) || (day <= 19 && month == 4)){
                printf("Tu signo es Aries.\n");
            } else if((day >= 20 && month == 4) || (day <= 20 && month == 5)){
                printf("Tu signo es Tauro.\n");
            } else if((day >= 21 && month == 5) || (day <= 21 && month == 6)){
                printf("Tu signo es Géminis.\n");
            } else if((day >= 22 && month == 6) || (day <= 21 && month == 7)){
                printf("Tu signo es Cáncer.\n");
            } else if((day >= 22 && month == 7) || (day <= 21 && month == 8)){
                printf("Tu signo es Leo.\n");
            } else if((day >= 22 && month == 8) || (day <= 22 && month == 9)){
                printf("Tu signo es Virgo.\n");
            } else if((day >= 23 && month == 9) || (day <= 22 && month == 10)){
                printf("Tu signo es Libra.\n");
            } else if((day >= 23 && month == 10) || (day <= 21 && month == 11)){
                printf("Tu signo es Escorpio.\n");
            } else if((day >= 22 && month == 11) || (day <= 21 && month == 12)){
                printf("Tu signo es Sagitario.\n");
            } else {
                printf("Algo salió mal\n");
            }
        }
    return 0;
    }
