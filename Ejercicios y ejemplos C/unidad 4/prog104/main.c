#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "spanish");
    int suma = 0;
    for(int i = 0;i < 13; i++){
        int multiplos = i * 4;
        printf("%d\n", multiplos);
        suma += multiplos;
    }
    printf("La suma de los m�ltiplos es: %d", suma);
    return 0;
}
