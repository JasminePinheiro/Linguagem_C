/*26) Escreva um programa para ler as notas da primeira e da segunda avaliação de um aluno. Calcule
e imprima a média semestral. O programa deverá aceitar apenas notas válidas no intervalo [0,10].
Cada nota deve ser validada separadamente. Ao final, deve ser impressa a mensagem “novo
calculo? (1-sim 2-nao)”, solicitando ao usuário que informe um código (1 ou 2), indicando se ele
deseja ou não executar o programa novamente. Se for informado o código 1, deve ser repetida a
execução de todo o programa para permitir um novo cálculo, se for informado o código 2 o
programa deve ser encerrado.*/

#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL,"Portuguese");
    float a1,a2,total;
    char nome[30];
    int calculo;

    printf("** Sará válido apenas notas no intervalo [0,10]\n\n");
    printf("Digite o nome do aluno: ");
    scanf("%c", &nome);
    fflush(stdin);
    printf("Digite a nota da Avaliação I: ");
    scanf("%f", &a1);
    printf("Digite a nota da Avaliação II: ");
    scanf("%f", &a2);

    total = a1 + a2;

    printf("A média semestral do aluno é: %.2f", total/2);
    printf("\n\n");

    printf("novo calculo? (1-sim 2-nao)\n");
    scanf("%d",&calculo);
    fflush(stdin);
    while(calculo == 1) {
        printf("** Sará válido apenas notas no intervalo [0,10]\n\n");
        printf("Digite o nome do aluno: ");
        scanf("%c", &nome);
        fflush(stdin);
        printf("Digite a nota da Avaliação I: ");
        scanf("%f", &a1);
        printf("Digite a nota da Avaliação II: ");
        scanf("%f", &a2);

        total = a1 + a2;

        printf("A média semestral do aluno é: %.2f", total/2);
        printf("\n\n");

        printf("novo calculo? (1-sim 2-nao)\n");
        scanf("%d", &calculo);
        fflush(stdin);
        printf("\n\n");
    }

    return(0);
}
