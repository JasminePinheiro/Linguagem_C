/*26) Escreva um programa para ler as notas da primeira e da segunda avalia��o de um aluno. Calcule
e imprima a m�dia semestral. O programa dever� aceitar apenas notas v�lidas no intervalo [0,10].
Cada nota deve ser validada separadamente. Ao final, deve ser impressa a mensagem �novo
calculo? (1-sim 2-nao)�, solicitando ao usu�rio que informe um c�digo (1 ou 2), indicando se ele
deseja ou n�o executar o programa novamente. Se for informado o c�digo 1, deve ser repetida a
execu��o de todo o programa para permitir um novo c�lculo, se for informado o c�digo 2 o
programa deve ser encerrado.*/

#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL,"Portuguese");
    float a1,a2,total;
    char nome[30];
    int calculo;

    printf("** Sar� v�lido apenas notas no intervalo [0,10]\n\n");
    printf("Digite o nome do aluno: ");
    scanf("%c", &nome);
    fflush(stdin);
    printf("Digite a nota da Avalia��o I: ");
    scanf("%f", &a1);
    printf("Digite a nota da Avalia��o II: ");
    scanf("%f", &a2);

    total = a1 + a2;

    printf("A m�dia semestral do aluno �: %.2f", total/2);
    printf("\n\n");

    printf("novo calculo? (1-sim 2-nao)\n");
    scanf("%d",&calculo);
    fflush(stdin);
    while(calculo == 1) {
        printf("** Sar� v�lido apenas notas no intervalo [0,10]\n\n");
        printf("Digite o nome do aluno: ");
        scanf("%c", &nome);
        fflush(stdin);
        printf("Digite a nota da Avalia��o I: ");
        scanf("%f", &a1);
        printf("Digite a nota da Avalia��o II: ");
        scanf("%f", &a2);

        total = a1 + a2;

        printf("A m�dia semestral do aluno �: %.2f", total/2);
        printf("\n\n");

        printf("novo calculo? (1-sim 2-nao)\n");
        scanf("%d", &calculo);
        fflush(stdin);
        printf("\n\n");
    }

    return(0);
}
