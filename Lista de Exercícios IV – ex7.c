/*7) Fa�a um programa para ordenar um vetor com 100 n�meros inteiros. Imprima o vetor antes e
ap�s a ordena��o.*/

#include <stdio.h>
#include <locale.h>
#include <time.h>
int main() {
    setlocale(LC_ALL,"Portuguese");
    int vetor[100];
    int i, copia,troca;
    srand(time(NULL));

    printf("\n\t\t------------------------ANTES DA ORDENA��O---------------------------\t\n");

    for(i = 0; i < 100; i++) {
        vetor[i] = rand() % 1000;
        printf("%d ", vetor[i]);
    }


    printf("\n\t\t------------------------DEPOIS DA ORDENA��O---------------------------\t\n");
    do {
        troca = 0;
        for(i = 0; i < 99; i++) {
            if(vetor[i] > vetor[i+1]) {
                copia = vetor[i];
                vetor[i] = vetor[i+1];
                vetor[i+1] = copia;
                troca = 1;
            }
        }

    } while(troca);
    for(i = 0; i < 100; i++) {
        printf("%d ", vetor[i]);

    }

    printf("\n\n");
    return 0;
}
