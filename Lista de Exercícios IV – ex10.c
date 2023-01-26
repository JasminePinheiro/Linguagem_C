/*10) Dadas duas matrizes A e B 3 x 3, faça um programa para calcular a soma das matrizes e salvar
em uma matriz C. Imprima as três matrizes.*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    setlocale(LC_ALL,"Portuguese");
    int i, j, matA[3][3], matB[3][3], matC[3][3];

    printf("---- Matriz 1 ----\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            matA[i][j] = rand() % 100;
            printf("%d ",matA[i][j]);
        }
        printf("\n");
    }

    printf("\n---- Matriz 2 ----\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            matB[i][j] = rand() % 100;
            printf("%d ",matB[i][j]);
        }
        printf("\n");
    }

    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            matC[i][j] = matB[i][j] + matA[i][j];
        }
    }


    printf("\n---- Matriz 3 ----\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d ",matC[i][j]);
        }
        printf("\n");
    }


    system("pause");
    return 0;
}
