/*12) Para uma turma de 45 alunos, construa um algoritmo que determine:
a) A idade média dos alunos com menos de 1,70m de altura;
b) A altura média dos alunos com mais de 20 anos.*/
#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL,"Portuguese");
    int qtd_aluno, idade, idadebaixinhos=0, qtdbaixinhos=0, qtdvelhinhos=0;
    char nome_aluno[30];
    float altura,idade_media,altura_media,altura_velhinhos=0;
    for(qtd_aluno=0; qtd_aluno<3; qtd_aluno++) {
        printf("\nInsira os dados do aluno %d: \n", qtd_aluno + 1);
        printf("Digite o nome: ");
        scanf("%s",&nome_aluno);
        fflush(stdin);
        printf("Digite a idade: ");
        scanf("%d",&idade);
        fflush(stdin);
        printf("Digite a altura: ");
        scanf("%f",&altura);
        fflush(stdin);

        if(altura < 1.7) {
            idadebaixinhos += idade;
            qtdbaixinhos ++;

        };

        if(idade > 20) {
            altura_velhinhos += altura;
            qtdvelhinhos++;
        };
    };

    printf("\n\nA quantidade de alunos que tem menos que 1.7 é: %d", qtdbaixinhos);
    idade_media = (float)idadebaixinhos / qtdbaixinhos;
    printf("\nA idade média dos alunos que tem menos que 1.7 é: %.2f", idade_media);
    printf("\n\n");
    altura_media = altura_velhinhos / qtdvelhinhos;
    printf("\nA quantidade de alunos que tem mais que 20 anos é: %d", qtdvelhinhos);
    printf("\nA altura média dos alunos que mais de 20 anos é %.2f", altura_media);
    printf("\n\n");

    return(0);
}
