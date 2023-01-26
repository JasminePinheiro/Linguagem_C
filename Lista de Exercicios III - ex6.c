/*6) Faça um programa que imprima na tela todos os múltiplos de 7 entre 1 e 9999.*/
#include <stdio.h>
#include <locale.h>
void main(){
setlocale(LC_ALL,"Portuguese");
int num;
for (num = 1; num <= 9999; num++)
    if(num % 7 == 0)
        printf("%d ", num);

return(0);
}
