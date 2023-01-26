#include <stdio.h>
#include <time.h>
int main() {
//matrizes são elementos do mesmo bidimencionais

    int mat1[3][3] = {1,2,3,4,5,6,7,8,9};
    int mat3[3][3] = {1,2,3,4,5,6,7,8,9};
    int i, j;
    int mat2[3][3];
    int mat4[3][3];
    int mat5[3][3];
    srand(time(NULL));


    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            mat5[i][j] = rand() % 100;

        }
        printf("\n");
    }
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%2d ", mat5[i][j]);

        }
        printf("\n");
    }








    /*for (i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++)
            printf("%d", mat1[i][j]);
        printf("\n");
    }

    printf("\n\n");


    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("Digite o valor da posicao [%d][%d]: ", i, j);
            scanf("%d", &mat2[i][j]);

        }
    }

    /*for(i = 0; i < 3; i++) {
        for(j = 0;  j < 3; j++)
            printf("%d ", mat2[i][j]);

        printf("\n");
    }*/

    /*for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++)
            mat3[i][j] =  mat2[i][j] +  mat1[i][j];
    }

    for(i = 0; i < 3; i++) {
        for(j = 0;  j < 3; j++)
            printf("%2d ", mat3[i][j]);

        printf("\n");
    }*/

    return(0);
}
