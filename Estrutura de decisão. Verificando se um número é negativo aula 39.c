#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "Portuguese");
    int a = 10;
    printf("Digite um n�mero: \n");
    scanf("%i", &a);
    //printf("Resultado l�gico �: %d\n\n", a < 0);
    a > 0 ? printf("Sim\n") : printf("N�o\n");
    if(a < 0){
        printf("O valor � negativo!");
        }
    else if( a == 0){
        printf(" '0' � um elemento neutro.");
    }
    else{
        printf("O n�mero � positivo!");
    }
    return(0);
}
