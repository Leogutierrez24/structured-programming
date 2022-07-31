#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

struct Employees{
    char names[20];
    float salary;
};

void loadEmployees(int* emplo){
    printf("Ingrese la cant. de empleados a ingresar: ");
    fflush(stdin);
    scanf("%d", emplo);
}

void chargeEmployees(struct Employees *x, int qty){
    for(int i = 0; i < qty; i++){
        printf("Ingrese el nombre del empleado: ");
        fflush(stdin);
        scanf("%s", &x->names);
        printf("Ingrese el sueldo del empleado: ");
        fflush(stdin);
        scanf("%f", &x->salary);
        x++;
        system("cls");
    }
}

int main()
{
    int employeesQty = 0;
    int* ptr_employees = &employeesQty;

    loadEmployees(ptr_employees);
    struct Employees x[employeesQty];
    struct Employees *ptr_x = &x;

    chargeEmployees(ptr_x, employeesQty);

    for(int i = 0; i < employeesQty; i++){
        printf("%s %4.2f\n", x[i].names, x[i].salary);
    }

    return 0;
}
