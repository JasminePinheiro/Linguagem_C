/*7) Leia um valor inteiro N. Apresente o quadrado de cada um dos valores pares, de 1 até N,
inclusive N, se for o caso.*/
#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL,"Portuguese");
    int n,i;
    int r = 1;
    printf("Digite um número inteiro: ");
    scanf("%i",&n);

    for (i = 2; i <= n; i++){
        if(i % 2 == 0)
    printf("%i ", i * i);}



}
