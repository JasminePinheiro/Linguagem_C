#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Aula 148: Vari�veis locais, globais e escopo de vari�veis

int idade2 = 35; //Vari�vel Global e seu escopo � global


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
/*REVIS�O
ID = � um tipo de vari�vel local (pois s� existe naquele lugar), j� o escopo dessa vari�vel � o procedimento imprimir
IDADE = � um tipo de vari�vel local (pois s� existe naquele lugar), j� o escopo dessa vari�vel � a fun��o main
*/
