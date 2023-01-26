#include <stdio.h>
#include <stdlib.h>
#define MAX 3
int main() {
    int par[MAX];
    int impar[MAX];
    int i;
    int contaPar = 0;
    int contaImpar = 0;
    int numero[MAX];
    for(i=0; i<MAX; i++) {
        printf("Digite o %d numero : ", i + 1);
        scanf("%d",&numero[i]);
    }
    for(i=0; i<MAX; i++) {
        if(numero[i] % 2 == 0) {
            par[contaPar] = numero[i];
            contaPar++;
        } else {
            impar[contaImpar] = numero[i];
             contaImpar++;
        }

    }
    printf("Imprimindo os 20 valores\n");
    for(i=0; i<MAX; i++) {
        printf("%d - %d\n", i + 1, numero[i]);
    }


    printf("\nImprimindo todos os numeros pares\n");
    for(i=0; i<contaPar; i++) {
        printf("%d - %d\n", i + 1, par[i]);
    }
    printf("\nImprimindo todos os numeros impares\n");
    for(i=0; i<contaImpar; i++) {
        printf("%d - %d", i + 1, impar[i]);
    }
    return(0);
}




