/*6) Fa�a um programa para ler um n�mero inteiro e verificar se corresponde a um m�s v�lido no
calend�rio. Caso corresponda, escrever o nome do m�s, caso contr�rio, escrever a mensagem �M�s
Inv�lido�.*/
#include <stdio.h>
#include <locale.h>
void main() {
    setlocale(LC_ALL,"Portuguese");
    int mes;
    printf("Digite um n�mero correspondente ao m�s que deseja procurar:\n");
    scanf("%d",&mes);
    switch(mes) {
    case 1:
        printf("Janeiro");
        break;
    case 2:
        printf("Fevereiro");
        break;
    case 3:
        printf("Mar�o");
        break;
    case 4:
        printf("Abril");
        break;
    case 5:
        printf("Maio");
        break;
    case 6:
        printf("Junho");
        break;
    case 7:
        printf("Julho");
        break;
    case 8:
        printf("Agosto");
        break;
    case 9:
        printf("Setembro");
        break;
    case 10:
        printf("Outubro");
        break;
    case 11:
        printf("Novembro");
        break;
    case 12:
        printf("Dezembro");
        break;
    default:
        printf("M�s Inv�lido");

    }
    return(0);
}
