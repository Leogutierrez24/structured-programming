#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "spanish");
    char* frase[4];
    frase[0] = "¿Qué";
    frase[1] = "onda";
    frase[2] = "perro";
    frase[3] = "primo?";

    for(int i = 0; i < 4; i++){
        printf("%s tiene %d letras\n", frase[i], strlen(frase[i]));
    }

    return 0;
}
