#include <stdio.h>
#include <locale.h>
int main(){
setlocale(LC_ALL,"Portuguese");
int idade;
printf("Digite a sua idade: ");
scanf("%d", &idade);

if(idade < 18){
    printf("Bebidas alcoólicas estão proibidas");
}
else {
    printf("Bebidas alcoólicas estão liberadas");
}
}
