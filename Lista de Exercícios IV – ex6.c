/*6) Faça um programa que leia 10 números reais e os armazene em um vetor. Em seguida, leia um
código inteiro e faça uma das ações abaixo:
0 – finaliza o programa;
1 – imprime o vetor na ordem do início ao fim;
2 – imprime o vetor na ordem inversa (do fim para o início).
O programa deve funcionar até que o usuário digite 0 para finalizar.*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
int main() {
    setlocale(LC_ALL,"Portuguese");
    int numero[10];
    int i, opcao;
    for(i = 0; i < 10; i++) {
        printf("Digite o número que deseja na posição [%d]: ", i);
        scanf("%d",&numero[i]);
    }
    printf("\n\n\n\t\t0 – Finaliza o programa;\n\t\t1 – Imprime o vetor na ordem do início ao fim;\n\t\t2 – Imprime o vetor na ordem inversa (do fim para o início).\n");
    do {
        printf("\nInsira a opção que deseja: ");
        scanf("%d", &opcao);
        system("cls");
        switch(opcao) {
        case 0:
            exit(0);
            break;
        case 1:
            for(i = 0; i < 10; i++) {
                printf("%d ", numero[i]);
            }
            break;
        case 2:

            for(i = 9; i >= 0; i--) {
                printf("%d ", numero[i]);
            }
            break;
        default :
            printf("Opção incorreta");
        }
    } while(opcao != 0);

    system("pause");
    return(0);
}
