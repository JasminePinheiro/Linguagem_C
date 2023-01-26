/* 25.08.22
Trocar os valores das duas variáveis sem nenhuma variavél auxiliar*/

#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"Portuguese");
    int a, b;
    printf("Digite o primeiro número: \n");
    scanf("%i",&a);
    printf("Digite o segundo número: \n");
    scanf("%i",&b);
    if(a != b){
        printf("O valor atual do 1° número é '%i' e do 2° número é '%i'.", b, a);
    }
    else {
        printf("Os ambos valores são iguais.");
    }

    return(0);
}

