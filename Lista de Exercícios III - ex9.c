/*9) Faça um programa que calcule o valor de A, dado por:
A = 1 + 2 + 3 + 4 + ... + n, onde n é um número inteiro, maior que zero informado pelo usuário.*/

#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL,"Portuguese");
    int n,soma, i;
    printf("Insira um número maior do que zero: \n");
    scanf("%d",&n);
    printf("\n");
    while(n == 0) {
        printf("Valor inválido!\n");
        printf("Insira um número maior do que zero: \n");
        scanf("%d",&n);
        printf("\n");
    }
    for(i=1; i<=n; i++) {
        printf("%d\n",i);
    }
    soma = i + i;

    printf("\n\nA soma dos valores: %d\n\n", soma);


    return(0);
}

