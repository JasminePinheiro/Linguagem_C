#include <stdio.h>
#include <locale.h>
int main(){
setlocale(LC_ALL,"Portuguese");
int num1, num2;
printf("Digite dois números e finaiize com enter ao digita-las: \n");
scanf("%i",&num1);
scanf("%i",&num2);
float rest = num1 % num2;
if(rest == 0){
    printf("O número %i é divisível por %i", num1,num2);
}
else{
      printf("O número %i não é divisível por %i", num1,num2);
}
}
