#include <stdlib.h>
#include <stdio.h>
#include <string.h>

// Aula 146 - Criando uma função que retorna o tamanho de uma string

//tipo de retorno - identificador - parâmetros

int minhaStrlen(char str[]) { // estamos recebendo uma string por isso colocamos o par de []

    int tam = 0;
    //oi
    while(str[tam] != '\0') {
        tam++;
    }
    return tam;
}

int main() {

    char vet[20] = {"Ola.Bom dia"};
    printf("strlen: %d\n", strlen(vet));
    printf("minhaStrlen: %d\n", minhaStrlen(vet));

    return 0;
}
