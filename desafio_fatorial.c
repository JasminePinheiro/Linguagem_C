#include <stdio.h>
#include <locale.h>
int main(){
setlocale(LC_ALL,"Portuguese");
int num1, num2;
printf("Digite dois n�meros e finaiize com enter ao digita-las: \n");
scanf("%i",&num1);
scanf("%i",&num2);
float rest = num1 % num2;
if(rest == 0){
    printf("O n�mero %i � divis�vel por %i", num1,num2);
}
else{
      printf("O n�mero %i n�o � divis�vel por %i", num1,num2);
}
}
