#include <stdio.h>
#include <locale.h>
int main(){
setlocale(LC_ALL,"Portuguese");
int x;
printf("Digite um número inteiro entre 1 a 5: ");
scanf("%d",&x);
    switch(x){
    case 1:
        printf("Primeiro");
        break;
    case 2:
        printf("Segundo");
        break;
    case 3:
        printf("Terceiro");
        break;
    case 4:
        printf("Quarto");
        break;
    case 5:
        printf("Quinto");
        break;
    default:
        printf("Número inválido");
}
}
