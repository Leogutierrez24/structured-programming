#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "spanish");
    float tempCelsius = 0, tempKelvin = 0;
    printf("Ingrese una temperatura en grados Celsius: ");
    fflush(stdin);
    scanf("%f", &tempCelsius);
    tempKelvin = tempCelsius + 273.15;
    printf("La temperatura ingresada es de %.2f° Kelvin", tempKelvin);
    // Los programas 12 y 13 son el mismo ejercicio solo que cambian las unidades de las temperaturas.
    return 0;
}
