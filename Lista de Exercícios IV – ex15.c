/*15) Dada uma matriz 4 x 4 faça um programa que diga se ela é um Quadrado Mágico ou não.*/

// Quadrado mágico é aquele que a soma das linhas, colunas, e as diagonais são iguais
#include <stdio.h>
#include <locale.h>
#define tam 4
int main() {
    setlocale(LC_ALL,"Portuguese");
    int l, c, total, soma, falhou = 0, mat[tam][tam] = {16,3,2,13,5,10,11,8,9,6,7,12,4,15,14,1};

    soma = 0;
    for(l = 0; l < tam; l++)
        soma += mat[l][l];
    printf("\nDiagonal princial: %d\n", soma);
    total = soma;

    soma = 0;
    for(l = 0; l < tam; l++)
        soma += mat[l][tam - 1 - l];
    printf("\nDiagonal secundária: %d\n", soma);
    if(total != soma) {
        printf("Diagonal secundária diferente\n");
        falhou = 1;
    }

    for(l = 0; l <  tam; l++) {
        soma = 0;
        for(c = 0; c < tam; c++)
            soma += mat[l][c];
        printf("Linha %d: %d\n", l, soma);
        if(total != soma) {
            printf("A linha %d é diferente!\n", l);
            falhou = 1;
        }
    }

    for(c = 0; c <  tam; c++) {
        soma = 0;
        for(l = 0; l < tam; l++)
            soma += mat[l][c];
        printf("Coluna %d: %d\n", c, soma);
        if(total != soma) {
            printf("A coluna %d é diferente!\n", l);
            falhou = 1;
        }
    }

    if(falhou)
        printf("\nNão é um quadrado mágico\n");
    else
        printf("\nÉ um quadrado mágico\n");


    system("pause");
    return 0;
}
