/*8) Elabore um programa que, dado o n�mero do m�s, indica quantos dias t�m esse m�s. Utilize para
isso a estrutura de sele��o switch.
Obs.: Considere fevereiro como tendo 28 dias.*/
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
void main() {
    setlocale(LC_ALL,"Portuguese");
    int mes;
    printf("Digite o n�mero do m�s que deseja saber a quantidade de dias: ");
    scanf("%i",&mes);
    switch(mes) {
    case 1:
        printf("31 dias");
        break;
    case 2:
        printf("28 dias");
        break;
    case 3:
        printf("30 dias");
        break;
    case 4:
        printf("30 dias");
        break;
    case 5:
        printf("31 dias");
        break;
    case 6:
        printf("30 dias");
        break;
    case 7:
        printf("31 dias");
        break;
    case 8:
        printf("31 dias");
        break;
    case 9:
        printf("30 dias");
        break;
    case 10:
        printf("31 dias");
        break;
    case 11:
        printf("30 dias");
        break;
    case 12:
        printf("31 dias");
        break;
    default:
        printf("M�s indefinido");
    }
}
