/* 25.08.22
Trocar os valores das duas vari�veis sem nenhuma variav�l auxiliar*/

#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"Portuguese");
    int a, b;
    printf("Digite o primeiro n�mero: \n");
    scanf("%i",&a);
    printf("Digite o segundo n�mero: \n");
    scanf("%i",&b);
    if(a != b){
        printf("O valor atual do 1� n�mero � '%i' e do 2� n�mero � '%i'.", b, a);
    }
    else {
        printf("Os ambos valores s�o iguais.");
    }

    return(0);
}

