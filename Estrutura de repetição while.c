#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL,"Portuguese");
    int valor,valor2;
    printf("Digite um valor maior que zero: ");
    scanf("%d",&valor);
    while(valor <=0 ) {
        printf("Valor inválido! Digite um outro valor: ");
        scanf("%d",&valor);
    }
    printf("Valor lido: %d\n\n", valor);

    do{
        printf("Digite um valor maior que zero: ");
        scanf("%d",&valor2);
    }while(valor2 <= 0);
    printf("Valor lido: %d",valor2);
    return(0);
}
