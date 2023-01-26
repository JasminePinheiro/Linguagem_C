/*9) Crie um programa que preencha uma matriz 5x10 com números inteiros. Em seguida faça:
a) some cada uma das linhas armazenando o resultado em um vetor;
b) some cada uma das colunas armazenando o resultado em um vetor;
c) Imprima os dois vetores identificando qual é a soma das linhas e qual é a soma das colunas.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
int main() {
    srand(time(NULL));
    printf("\n------------Matriz-----------\n");
    int i, j, soma, somaLinha[5], somaColuna[10], mat[5][10];

    for(i = 0; i < 5; i++) {
        for(j = 0; j < 10; j++) {
            mat[i][j] = rand() % 100;
            printf("%2d ",mat[i][j]);
        }
        printf("\n");
    }

    for(i = 0; i < 5; i++) {
        soma = 0;
        for(j = 0; j < 10; j++) {
            soma += mat[i][j];
        }
        somaLinha[i] = soma;
    }

    for(j = 0; j < 10; j++) {
        soma = 0;
        for(i = 0; i < 5; i++) {
            soma += mat[i][j];
        }
        somaColuna[j] = soma;
    }



    printf("\n\n\nTotal: %d\n\n",soma);
    for(i = 0; i < 5; i++) {
        printf("Total linha[%d]: %d \n",i,somaLinha[i]);
    }
    printf("\n");
    for(j = 0; j < 10; j++) {
        printf("Total coluna[%d]: %d \n",j,somaColuna[j]);
    }



    system("pause");
    return 0;
}
