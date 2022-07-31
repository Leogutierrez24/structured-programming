#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

struct Registro{
    int month;
    int cases;
    int zone;
};

void chargeData (struct Registro *x){
    for(int i = 0; i < 12; i++){
        x->month = i + 1;
        printf("Ingrese el número de casos del mes %d: ", i + 1);
        fflush(stdin);
        scanf("%d", &x->cases);
        printf("Ingrese la zona de registro (CABA - 1 / Conurbano - 2): ");
        fflush(stdin);
        scanf("%d", &x->zone);
        x++;
        system("cls");
    }
}

void showData(struct Registro *x){
    printf("N° MES\t\tN° CASOS\t\tZONA\n");
    for(int i = 0; i < 12; i++){
        printf("%4d\t\t", x->month);
        printf("%4d\t\t", x->cases);
        if(x->zone == 1){
            printf("CABA");
        } else {
            printf("Conurbano");
        }
        printf("\n");
        x++;
    }
}

int main()
{
    setlocale(LC_ALL, "spanish");
    struct Registro x[12];
    struct Registro *ptr_x = x;

    int totalCases = 0;
    int mostCasesCABA = 0;
    int mostCasesPerCity = 0;
    int mostCasesPerSemester = 0;

    int casesCABA = 0, casesConurbano = 0;

    chargeData(ptr_x);
    showData(x);

    for(int i = 0; i < 12; i++){ // Cantidad de personas afectadas
        totalCases += x[i].cases;
    }
    printf("La cantidad de personas afectadas es de: %d\n", totalCases);

    for(int i = 0; i < 12; i++){ // Mes con más afectados CABA
        if(x[i].zone == 1){
            if(mostCasesCABA < x[i].cases) mostCasesCABA = x[i].month;
        }
    }
    printf("El mes con más afectados en CABA es: %d\n", mostCasesCABA);

    for(int i = 0; i < 12; i++){ // Que localidad tuvo más casos
        if(x[i].zone == 1){
            casesCABA += x[i].cases;
        } else {
            casesConurbano += x[i].cases;
        }
    }

    if(casesCABA > casesConurbano){
        mostCasesPerCity = 1;
    } else {
        mostCasesPerCity = 2;
    }
    if(mostCasesPerCity == 1){
        printf("La localidad con más afectados es CABA\n");
    } else {
        printf("La localidad con más afectados es el Conurbano\n");
    }

    for(int i = 0; i < 6; i++){ // Que localidad tuvo más casos en el primer semestre
        if(x[i].zone == 1){
            casesCABA += x[i].cases;
        } else {
            casesConurbano += x[i].cases;
        }
    }

    if(casesCABA > casesConurbano){
        mostCasesPerCity = 1;
    } else {
        mostCasesPerCity = 2;
    }
    if(mostCasesPerCity == 1){
        printf("La localidad con más casos en el primer semestre es CABA\n");
    } else {
        printf("La localidad con más casos en el primer semestre es el Conurbano\n");
    }

    struct Registro aux;
    for(int i = 0; i < 12 - 1; i++){
       for(int j = i + 1; j < 12; j++){
            if(x[j].cases > x[j + 1].cases){
                aux = x[j];
                x[j] = x[i];
                x[i] = aux;
            }
       }
    }
    printf("CONURBNO\nMES\t\tN° CONTAGIADOS\n");
    for(int i = 0; i < 12; i++){
        if(x[i].zone == 2){
            printf("%4d\t\t%d\n", x[i].month, x[i].cases);
        }
    }


    return 0;
}
