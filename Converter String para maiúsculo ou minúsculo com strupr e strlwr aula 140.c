#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
    Aula 140: Convertendo uma String para maiúscula ou minusculo com as funções:
   -> strupr() **Maiúsicula
   -> strlwr() *Minúscula
*/

int main(){
    char palavra[50] = {"Bom dia lindoooss"};
    char palavra2[50] = {"Bom dia lindoooss"};
    strupr(palavra);
    strlwr(palavra2);
    printf("\n%s\n", palavra);
    printf("\n%s\n", palavra2);


return 0;
}
