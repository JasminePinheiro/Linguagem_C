/*4) Faça um programa que some os números ímpares entre 1 e 1000 e imprima a resposta.
Restrição:
→ O bloco de repetição deve executar no máximo 500 vezes.*/
#include <stdio.h>
#include <locale.h>
int main(){
setlocale(LC_ALL,"Portuguese");
int num, soma = 0;
for(num = 0; num <= 1000; num+=3){
    soma+=num;
}
    printf("Resultado da soma é: %d", soma);
return(0);
}
