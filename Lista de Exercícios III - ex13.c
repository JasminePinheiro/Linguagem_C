/*13) Fa�a um programa que pe�a ao usu�rio um n�mero inteiro maior que 2 e diga se o n�mero
informado � primo ou n�o.*/
#include <stdio.h>
#include <locale.h>
void main() {
    setlocale(LC_ALL,"Portuguese");
    int num, resultado1, resultado2,resultado3;
    printf("Digite um n�mero inteiro maior que dois: ");
    scanf("%d",&num);
    resultado1 = num % 2;
    resultado2 = num % 3;
    resultado3 = num % 5;
    if(num == 3 || num == 5) {
        printf("O numero %d � primo",num);
        printf("\n\n");
        exit(0);
    }
    if(resultado1 == 0 || resultado2 == 0 || resultado3 == 0 || num == 2) {
        printf("O n�mero %d n�o � primo", num);
    } else {
        printf("O n�mero %d � primo", num);
    }
    printf("\n\n");
    return(0);
}
