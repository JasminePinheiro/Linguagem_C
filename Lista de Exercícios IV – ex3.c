/*3) Escrever um programa que l� um vetor N de tamanho 20 e o imprime na tela. Em seguida, troque
o 1o elemento com o �ltimo, o 2a com o pen�ltimo, ... at� o 10a com o 11o. Imprima o vetor N
modificado.*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
int main() {
    setlocale(LC_ALL,"Portuguese");
    int vetor[20];
    int i,copia, fim = 19;
    printf("Insira os n�meros\n");
    for(i = 0; i < 20; i++) {
        printf("Posi��o [%d]: ", i+1);
        scanf("%d",&vetor[i]);
    }
    printf("\nImprimindo os dados originais\n");
    for(i = 0; i < 20; i++) {
        printf("%d ",vetor[i]);
    }
    for(i = 0; i < 10; i++) {
        copia = vetor[i];
        vetor[i] = vetor[fim];
        vetor[fim] = copia;
        fim--;
    }
    printf("\nImprimindo os dados modificados\n");
    for(i = 0; i < 20; i++) {
        printf("%d ",vetor[i]);
    }

    printf("\n\n");
    system ("pause");
    return 0;
}
