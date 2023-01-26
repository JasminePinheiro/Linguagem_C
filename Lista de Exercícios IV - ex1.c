/*1) Faça um programa que preencha um vetor de inteiros de tamanho 10 pedindo valores ao usuário.
Em seguida, calcule e salve num segundo vetor o quadrado de cada elemento do primeiro vetor. Por
fim, imprima os dois vetores.*/

#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL,"Portuguese");
    int n1[10];
    int n2[10];
    int i;


    for(i = 0; i < 10; i++) {
        printf("Digite o número da posição %d: ", 1+i);
        scanf("%d", &n1[i]);
    }
    printf("\n\n");

       for(i = 0; i < 10; i++) {
        n2[i] =  n1[i] + n1[i];
    }


    for(i = 0; i < 10; i++) {
        printf("%d ",n2[i]);
    }
    printf("\n\n");
    return(0);
}
