/*9) Fa�a um programa que calcule o valor de A, dado por:
A = 1 + 2 + 3 + 4 + ... + n, onde n � um n�mero inteiro, maior que zero informado pelo usu�rio.*/

#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL,"Portuguese");
    int n,soma, i;
    printf("Insira um n�mero maior do que zero: \n");
    scanf("%d",&n);
    printf("\n");
    while(n == 0) {
        printf("Valor inv�lido!\n");
        printf("Insira um n�mero maior do que zero: \n");
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

