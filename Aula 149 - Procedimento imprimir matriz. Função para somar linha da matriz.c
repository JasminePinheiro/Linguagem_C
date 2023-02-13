#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
//Aula 149: Procedimento imprimir matriz. Fun��o para somar linha da matriz

int tam = 5; // uma vari�vel global
void imprimir(int m[][5]) { // � obrigatorio informar para o programa a quantidade de colunas
    int i, j;
    for (i = 0; i < tam; i++) {
        for(j = 0; j < tam; j++) {
            printf("%2d ", m[i][j]);
        }
        printf("\n");
    }
}
// fun��o que calcula e retorna a soma de uma linha da matriz
int somarLinha(int x[][5], int l) { //vamos receber a matriz, tamb�m � obrigat�rio colocar o numero de colunas da matriz
    int c, soma = 0;
    for(c = 0; c < tam; c++)
        soma += x [l][c];
    return soma;
}

int main() {
    int mat[5][5];
    int i, j;

    srand(time(NULL));

    for (i = 0; i < tam; i++) {
        for(j = 0; j < tam; j++) {
            mat[i][j] = rand() % 10;
        }
    }
    imprimir(mat); //estamos chamando o procedimento
    for(i = 0; i < tam; i++)

        printf("Soma da linha %d: %d\n",i,somarLinha(mat, i)); // estamos chamando a fun��o


    return 0;
}
