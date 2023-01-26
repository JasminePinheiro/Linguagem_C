/*8) Escreva um programa em C que funcione como uma calculadora. O programa deve apresentar
um menu ao usu�rio da seguinte forma:
1 � Somar
2 � Subtrair
3 � Multiplicar
4 � Dividir
0 � Sair*/
#include <stdio.h>
#include <locale.h>
int main() {
    int operacao;
    float n1,n2,r;
    setlocale(LC_ALL,"Portuguese");
    printf("Vamos realizar c�lculos!!\n\n");
    printf("1 � Somar\n2 � Subtrair\n3 � Multiplicar\n4 � Dividir\n0 � Sair\n\n");
    printf("Insira um n�mero de acordo com a fun��o que deseja realizar: ");
    scanf("%i",&operacao);
    if(operacao == 0 && operacao > 5) {
        printf("Programa finalizado\n");
    }
    while(operacao != 0 && operacao < 5) {


        printf("\n\nConfirme novamente o n�mero da opera��o: ");
        scanf("%i",&operacao);
        if(operacao == 0 ) {
            printf("Programa finalizado\n");
            exit(0);
        }

        printf("\nDigite dois n�meros para a opera��o: \n");
        scanf("%f%f",&n1,&n2);

        if(operacao == 4 && n2 == 0) {
            printf("N�o existe divis�o por 0\n");
            printf("Insira um novo n�mero: ");
            scanf("%f",&n2);

        }


        switch(operacao) {
        case 1:
            printf("Somar\n%.1f + %.1f = %.1f\n", n1,n2,n1+n2);
            break;
        case 2:
            printf("Subtrair\n%.1f - %.1f = %.1f", n1,n2,n1-n2);
            break;
        case 3:
            printf("Multiplicar\n%.1f * %.1f = %.1f", n1,n2,n1*n2);
            break;
        case 4:
            printf("Dividir\n%.1f / %.1f = %.1f", n1,n2,n1/n2);
            break;
        case 0:
            printf("Sair\n\n");
            break;
        default:
            printf("Opera��o inv�lida\n");
        }
    }

    return(0);
}
