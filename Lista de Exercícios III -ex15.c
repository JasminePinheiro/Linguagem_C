/*15) Fa�a um programa que pe�a ao usu�rio dois n�meros inteiros e apresente o resultado na
multiplica��o entre os dois n�meros sem utilizar a opera��o de multiplica��o.*/
#include <stdio.h>
#include <locale.h>
void main() {
    int num1,num2, resposta = 0, i;
    setlocale(LC_ALL,"Portuguese");
    printf("Digite dois n�mero inteiros: \n");
    scanf("%d%d",&num1,&num2);
    for (i = 1; i <= num1; i++)
    resposta += num2;
    printf("%d * %d = %d",num1,num2,resposta);
    printf("\n\n");
    return(0);
}
