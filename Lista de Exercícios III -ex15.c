/*15) Faça um programa que peça ao usuário dois números inteiros e apresente o resultado na
multiplicação entre os dois números sem utilizar a operação de multiplicação.*/
#include <stdio.h>
#include <locale.h>
void main() {
    int num1,num2, resposta = 0, i;
    setlocale(LC_ALL,"Portuguese");
    printf("Digite dois número inteiros: \n");
    scanf("%d%d",&num1,&num2);
    for (i = 1; i <= num1; i++)
    resposta += num2;
    printf("%d * %d = %d",num1,num2,resposta);
    printf("\n\n");
    return(0);
}
