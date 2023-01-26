/*14) Faça um programa que imprima na tela apenas os valores abaixo da diagonal principal de uma
matriz 4 x 4.*/
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>
int main(){
    int i, j, mat[4][4];
    srand(time(NULL));
    printf("----Matriz Inteira----\n");
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            mat[i][j] = rand() % 100;
            printf("%2d ", mat[i][j]);
        }
        printf("\n");
    }

        printf("---Abaixo da diagonal principal----\n");
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
        if(i > j){
            printf("%2d ", mat[i][j]);
        }else{
            printf(" ");
        }
        }
        printf("\n");
    }

printf("\n\n");
system("pause");
return 0;
}
