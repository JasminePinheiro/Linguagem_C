#include <stdio.h>
#include <locale.h>
int main(){
int idade;
setlocale(LC_ALL,"Portuguese");
printf("Digite a sua idade: ");
scanf("%i",&idade);
if(idade <= 5){
    printf("Bebê");
    }
   else if(idade > 5 && idade <=10 ){
    printf("Criança");
   }
    else if(idade > 10 && idade <=18 ){
    printf("Adolescente");
   }
   else if(idade > 18 && idade <=50 ){
    printf("Adulto");
   }
   else{
    printf("Idoso");
   }
}
