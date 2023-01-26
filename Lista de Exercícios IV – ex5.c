/*5) Faça um programa que receba a temperatura média de cada mês do ano, armazenando-as em um
vetor. Ao final, mostre a maior e a menor temperatura do ano e em que mês ocorreram (mostrar o
mês por extenso: janeiro, fevereiro ...). Desconsidere empates.*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
int main() {
    setlocale(LC_ALL,"Portuguese");
    int i, vetor[12];
    int tpMaior = 0, tpMenor = 99, indiceMenor, indiceMaior;
    printf("Digite a temperatura média de cada mês\n");
    for(i = 0; i < 12; i++) {
        printf("Mês [%d]: ",i+1);
        scanf("%d",&vetor[i]);
        if(tpMaior < vetor[i]) {
            tpMaior = vetor[i];
            indiceMaior = i;
        }
        if(tpMenor > vetor[i]) {
            tpMenor = vetor[i];
            indiceMenor = i;
        }
    }

    printf("\nMaior temperatura: %d°C\n", tpMaior);
    switch(indiceMaior) {
    case 0:
        printf("Ocorreu no mês de janeiro");
        break;
    case 1:
        printf("Ocorreu no mês de fevereiro");
        break;
    case 2:
        printf("Ocorreu no mês de março");
        break;
    case 3:
        printf("Ocorreu no mês de abril");
        break;
    case 4:
        printf("Ocorreu no mês de maio");
        break;
    case 5:
        printf("Ocorreu no mês de junho");
        break;
    case 6:
        printf("Ocorreu no mês de julho");
        break;
    case 7:
        printf("Ocorreu no mês de agosto");
        break;
    case 8:
        printf("Ocorreu no mês de setembro");
        break;
    case 9:
        printf("Ocorreu no mês de outubro");
        break;
    case 10:
        printf("Ocorreu no mês de novembro");
        break;
    case 11:
        printf("Ocorreu no mês de dezembro");
        break;
    }
    printf("\n");

    printf("\nMenor temperatura: %d°C\n", tpMenor);
    switch(indiceMenor) {
    case 0:
        printf("Ocorreu no mês de janeiro");
        break;
    case 1:
        printf("Ocorreu no mês de fevereiro");
        break;
    case 2:
        printf("Ocorreu no mês de março");
        break;
    case 3:
        printf("Ocorreu no mês de abril");
        break;
    case 4:
        printf("Ocorreu no mês de maio");
        break;
    case 5:
        printf("Ocorreu no mês de junho");
        break;
    case 6:
        printf("Ocorreu no mês de julho");
        break;
    case 7:
        printf("Ocorreu no mês de agosto");
        break;
    case 8:
        printf("Ocorreu no mês de setembro");
        break;
    case 9:
        printf("Ocorreu no mês de outubro");
        break;
    case 10:
        printf("Ocorreu no mês de novembro");
        break;
    case 11:
        printf("Ocorreu no mês de dezembro");
        break;
    }
    printf("\n\n");
    system("pause");
    return 0;
}
