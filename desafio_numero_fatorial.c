#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"Portuguese");
int numero;
int resposta = 1;

printf("Digite um numero qualquer: ");
scanf("%i",&numero);
for(; numero >=1; --numero){
        resposta = resposta * numero;
    }
printf("O número fatorial é %i", resposta);
}
