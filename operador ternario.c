#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"Portuguese");
    int a = 10;
        printf("******Operador Ternário******\n\n");
    printf("Digite um valor qualquer: \n");
    scanf("%d",&a);

    a < 0 ? printf("O valor é negativo\n") : printf("O valor é positivo \n");
    return(0);
}
