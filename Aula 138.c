#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
Aula 138: Procurando um caracter em uma String com as fun��es strchr e srtrchr
strchr -> retorna a primeira ocorr�ncia
strrchr -> retorna a �ltima ocorr�ncia
*/
int main() {
    char palavra[50] = {"abacate"};
    char *letra;//a vari�vel letra vai armazenar o endere�o

     letra = strchr(palavra, 'a');//essa fun��o busca o primeiro caracter
    //a vari�vel letra recebe o retorno na fun��o

    printf("\n %c \n", *letra); //quero imprimir o conte�do apontado pela variavel letra
    printf("\n %c \n", *(letra + 1)); //aritm�tica de ponteiros
    return 0;
}
