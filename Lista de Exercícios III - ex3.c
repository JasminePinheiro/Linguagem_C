/*3) Faça um programa que some os números ímpares entre 1 e 1000 e imprima a resposta.*/
#include <stdio.h>
#include <locale.h>
void main() {
    setlocale(LC_ALL,"Portuguese");
    int num, soma = 0;
    for (num = 1; num <=1000; num+=3) {
        soma += num;

    }
    printf("%d ",soma);
    return(0);
}
