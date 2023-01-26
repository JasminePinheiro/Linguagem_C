/*17) Fa�a um programa que pe�a n�meros ao usu�rio. Quando o usu�rio digitar o n�mero 0 (zero) o
programa deve imprimir na tela quantos n�meros positivos e negativos foram digitados.
Exemplo:*/

#include <stdio.h>
#include <locale.h>
int main() {
    int num, qtdpositivos = 0, qtdnegativos = 1;
    setlocale(LC_ALL,"Portuguese");
    printf("Digite um n�mero: ");
    scanf("%d",&num);
    while(num != 0) {
        printf("Digite um n�mero: ");
        scanf("%d",&num);
        fflush(stdin);

        if (num < 0) {
            qtdnegativos++;
        };
        if(num > 0) {
            qtdpositivos++;
        };

    };

    printf("\n\nA quantidade de n�meros positivos: %d",qtdpositivos);
    printf("\n\nA quantidade de n�meros negativos: %d",qtdnegativos);
    return(0);
}
