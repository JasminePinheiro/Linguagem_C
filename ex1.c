/* Descubra se o 1� n�mero � div�sivel pelo 2� n�mero*/

#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"Portuguese");
    int n1, n2;
    printf("Digite um n�mero: ");
    scanf("%d",&n1);
    printf("Digite o outro n�mero: ");
    scanf("%d",&n2);
    if(n1 % n2  == 0){
        printf("Esse n�mero � divis�vel");
    }
    else{
        printf("Esse n�mero n�o � div�sivel");
    }

}
