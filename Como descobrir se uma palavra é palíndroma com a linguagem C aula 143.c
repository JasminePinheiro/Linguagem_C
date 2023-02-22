#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
    Aula 143: Leia uma palavra e diga se ela é palindroma (ou seja lendo ela de trás pra frente é a mesma coisa. EX Ana, arara.
*/
int main() {

    char palavra[30], copia[30];
    int i,tam, iguais = 0;

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    tam = strlen(palavra);
    for(i = 0; i < strlen(palavra); i++) {
        copia[i] = palavra[tam - 1]; //a copia vai receber o ultimo elemento da variavel palavra
        tam--;
    }
    copia[i] = '\0'; //precisamos colocar \0 no final
    tam = strlen(palavra);
    for(i = 0; i < strlen(palavra); i++) {
        if(palavra[i] == copia[i])
            iguais++;
    }
    if(tam == iguais)
        printf("\nE palindroma\n");
    else
        printf("nao e palindroma\n");
    return 0;
}
