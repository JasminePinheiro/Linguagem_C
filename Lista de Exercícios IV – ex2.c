/*2) Faça um programa que some o conteúdo de dois vetores de tamanho 25 e armazene o resultado
em um terceiro vetor. Imprima os três vetores na tela.*/

#include <stdio.h>
#include <locale.h>
#include <time.h>
int main() {
    setlocale(LC_ALL,"Portuguese");
    int i,vetor1[25];
    int vetor2[25];
    int vetorRes[25];
    srand(time(NULL));
    printf("Valores do vetor I\n");
    for(i = 0; i < 25; i++) {
        vetor1[i] = 1 + rand() % 50;
    }
    for(i = 0; i < 25; i++) {
        printf("%d ",vetor1[i]);
    }
    printf("\n\n");
    printf("Valores do vetor II\n");
    for(i = 0; i < 25; i++) {
        vetor2[i] = 1 + rand() % 50;
    }
    for(i = 0; i < 25; i++) {
        printf("%d ",vetor2[i]);
    }
    printf("\n\n");
    printf("Resultado da soma dos dois vetores\n");
    for(i = 0; i < 25; i++) {
        vetorRes[i] = vetor1[i] + vetor2[i];
    }
    for(i = 0; i < 25; i++) {
        printf("%d ", vetorRes[i]);
    }
    printf("\n\n");
    return 0;
}
