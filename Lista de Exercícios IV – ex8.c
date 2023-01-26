/*8) Faça um programa que calcule e imprima a soma de todos os elementos de uma matriz 5 x 7.*/
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>
int main() {
    setlocale(LC_ALL,"Portuguese");
    srand(time(NULL));
    int i, j, soma = 0, mat1[5][7];

    printf("\n-----------------1° MATRIZ------------\n");
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 7; j++) {
            mat1[i][j] = rand() % 100;
            printf("%2d ",mat1[i][j]);
        }
        printf("\n\n");
    }

    for(i = 0; i < 5; i++) {
        for(j = 0; j < 7; j++) {
            soma += mat1[i][j];

        }
        //printf("\n\n");
    }
    printf("\n-----------------RESULTADO------------\n");
    printf("A soma é: %d", soma);
    printf("\n\n\n\n");
    system("pause");
    return 0;
}
