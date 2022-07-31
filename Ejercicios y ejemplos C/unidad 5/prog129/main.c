#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

void loadWord(char* word){
    printf("Ingrese una palabra: ");
    fflush(stdin);
    fgets(word, 20, stdin);
}

int checkFrase(char* word){
    int arrayLength = strlen(word) - 1;
    int init = 0;
    int last = arrayLength - 1;
    for(int i = 0; i < arrayLength / 2; i++){
        if(word[i] == word[last]){
            init++;
            last--;
        } else {
            return 0;
        }
    }
    return 1;
}

int main()
{
    setlocale(LC_ALL, "spanish");
    char word[20];
    char value = 0;
    char* ptr_word = &word;

    loadWord(ptr_word);
    value = checkFrase(ptr_word);

    if(value == 1){
        printf("La palabra es palíndroma");
    } else {
        printf("La palabra no es palíndroma");
    }
    return 0;
}
