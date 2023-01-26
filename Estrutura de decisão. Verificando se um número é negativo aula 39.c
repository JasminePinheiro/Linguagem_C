#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "Portuguese");
    int a = 10;
    printf("Digite um número: \n");
    scanf("%i", &a);
    //printf("Resultado lógico é: %d\n\n", a < 0);
    a > 0 ? printf("Sim\n") : printf("Não\n");
    if(a < 0){
        printf("O valor é negativo!");
        }
    else if( a == 0){
        printf(" '0' é um elemento neutro.");
    }
    else{
        printf("O número é positivo!");
    }
    return(0);
}
