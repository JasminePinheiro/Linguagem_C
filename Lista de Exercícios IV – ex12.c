/*12) Faça um programa que imprima na tela a diagonal secundária de uma matriz 7 x 7.*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

/*Só dá para imprimir diagonal secundária de uma matriz, se ela dor quadrada, ou seja a quantidade de linhas e colunas tem que ser iguais*/
int main() {
    srand(time(NULL));
    setlocale(LC_ALL,"Portuguese");
    int i,j,mat[7][7];
    printf("\n------Matriz Inteira-----\n");
    for(i = 0; i < 7; i++) {
        for(j = 0; j < 7; j++) {
            mat[i][j] = rand() % 50;
            printf("%2d ",mat[i][j]);
        }
        printf("\n");
    }


       printf("\n------Diagonal Secundária-----\n");
    for(i = 0; i < 7; i++) {
            printf("%2d ",mat[i][7 - 1 - i]);
        }





    printf("\n\n");
    system("pause");
    return 0;
}
