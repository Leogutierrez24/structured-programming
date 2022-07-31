#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <windows.h>

int main()
{
    char salir = ' ';
    do{
        printf("Presiona S para salir:\n");
        fflush(stdin);
        scanf("%c", &salir);
        salir = toupper(salir);
        system("cls");
    } while (salir != 'S');
    return 0;
}
