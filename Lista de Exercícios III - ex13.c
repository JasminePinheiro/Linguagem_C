/*13) Faça um programa que peça ao usuário um número inteiro maior que 2 e diga se o número
informado é primo ou não.*/
#include <stdio.h>
#include <locale.h>
void main() {
    setlocale(LC_ALL,"Portuguese");
    int num, resultado1, resultado2,resultado3;
    printf("Digite um número inteiro maior que dois: ");
    scanf("%d",&num);
    resultado1 = num % 2;
    resultado2 = num % 3;
    resultado3 = num % 5;
    if(num == 3 || num == 5) {
        printf("O numero %d é primo",num);
        printf("\n\n");
        exit(0);
    }
    if(resultado1 == 0 || resultado2 == 0 || resultado3 == 0 || num == 2) {
        printf("O número %d não é primo", num);
    } else {
        printf("O número %d é primo", num);
    }
    printf("\n\n");
    return(0);
}
