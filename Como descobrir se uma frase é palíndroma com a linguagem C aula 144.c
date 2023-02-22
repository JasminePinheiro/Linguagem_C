#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
    Aula 144: Leia uma frase e diga se ela щ palindroma
    ex: a sacada de casa
        a torre da derroya
        luz azul
*/

int main() {

    char palavra[50], copia[50];
    int i, tam, iguais = 0;
    printf("Digite uma frase: ");
    scanf("%50[^\n]", palavra); //estou dizendo para a função que é para ler uma quantidade máxima de 50 caracteres e atá o usuário clicar no enter
    //remover => todos os caracteres especiais (?, : ;)
   for(i = 0; i < strlen(palavra); i++){

   }
    return 0;
}
