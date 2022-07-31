#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char name[50];
    char surname[50];
    char nameSurname[50] = "";
    char surnameName[50] = "";

    printf("Ingrese su nombre:\n");
    fflush(stdin);
    scanf("%s", &name);
    printf("Ingrese su apellido:\n");
    fflush(stdin);
    scanf("%s", &surname);

    strcat(nameSurname, name);
    strcat(nameSurname, " ");
    strcat(nameSurname, surname);

    strcat(surnameName, surname);
    strcat(surnameName, " ");
    strcat(surnameName, name);

    printf("%s\n", nameSurname);
    printf("%s\n", surnameName);
    return 0;
}
