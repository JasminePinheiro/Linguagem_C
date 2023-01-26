/*11) Faça um programa que imprima na tela a diagonal principal de uma matriz 5 x 5.*/
#include <stdio.h>
#include <locale.h>
#include <time.h>
#include <stdlib.h>
int main() {
    srand(time(NULL));
    setlocale(LC_ALL,"Portuguese");
    int i,j,mat[5][5];
    printf("------ Matriz Inteira ------\n");
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            mat[i][j] = rand() % 80;
            printf("%2d ", mat[i][j]);
        }
        printf("\n");
    }


    printf("\n\n------ Diagonal principal ------\n");
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            if(i == j) {
                printf("%d", mat[i][j]);
            } else {
                printf(" ");
            }
            printf("");
        }
    }

        printf("\n\n");
        system("pause");
        return 0;
    }
