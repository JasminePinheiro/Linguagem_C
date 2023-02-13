#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Aula 148: Variáveis locais, globais e escopo de variáveis

int idade2 = 35; //Variável Global e seu escopo é global


void imprimir(int id) {
    printf("\n1Idade: %d", id);
    printf("\n2Idade2: %d", idade2);
        printf("\n\n");
}

int main() {
    int idade = 25;
    printf("\n3Idade: %d\n", idade);
    printf("4Idade2: %d", idade2);
    imprimir(idade);
    return 0;
}
/*REVISÃO
ID = É um tipo de variável local (pois só existe naquele lugar), já o escopo dessa variável é o procedimento imprimir
IDADE = É um tipo de variável local (pois só existe naquele lugar), já o escopo dessa variável é a função main
*/
