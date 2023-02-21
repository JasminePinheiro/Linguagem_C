#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
Aula 138: Procurando um caracter em uma String com as funções strchr e srtrchr
strchr -> retorna a primeira ocorrência
strrchr -> retorna a última ocorrência
*/
int main() {
    char palavra[50] = {"abacate"};
    char *letra;//a variável letra vai armazenar o endereço

     letra = strchr(palavra, 'a');//essa função busca o primeiro caracter
    //a variável letra recebe o retorno na função

    printf("\n %c \n", *letra); //quero imprimir o conteúdo apontado pela variavel letra
    printf("\n %c \n", *(letra + 1)); //aritmética de ponteiros
    return 0;
}
