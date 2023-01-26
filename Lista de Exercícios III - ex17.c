/*17) Faça um programa que peça números ao usuário. Quando o usuário digitar o número 0 (zero) o
programa deve imprimir na tela quantos números positivos e negativos foram digitados.
Exemplo:*/

#include <stdio.h>
#include <locale.h>
int main() {
    int num, qtdpositivos = 0, qtdnegativos = 1;
    setlocale(LC_ALL,"Portuguese");
    printf("Digite um número: ");
    scanf("%d",&num);
    while(num != 0) {
        printf("Digite um número: ");
        scanf("%d",&num);
        fflush(stdin);

        if (num < 0) {
            qtdnegativos++;
        };
        if(num > 0) {
            qtdpositivos++;
        };

    };

    printf("\n\nA quantidade de números positivos: %d",qtdpositivos);
    printf("\n\nA quantidade de números negativos: %d",qtdnegativos);
    return(0);
}
