#include <stdio.h>
#include <locale.h>
int main(){
setlocale(LC_ALL,"Portuguese");
int idade;
printf("Digite a sua idade: ");
scanf("%d", &idade);

if(idade < 18){
    printf("Bebidas alco�licas est�o proibidas");
}
else {
    printf("Bebidas alco�licas est�o liberadas");
}
}
