#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"Portuguese");
    int a = 10;
        printf("******Operador Tern�rio******\n\n");
    printf("Digite um valor qualquer: \n");
    scanf("%d",&a);

    a < 0 ? printf("O valor � negativo\n") : printf("O valor � positivo \n");
    return(0);
}
