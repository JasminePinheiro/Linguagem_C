#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
   Aula 139: Localizando uma substring com a função strstr()
--Procurar uma string detro de uma string
*/

int main() {
    char palavra[50] = {"Bom dia pessoal"};
    char str[] = {"dia"};
    char *ponteiro;

    ponteiro = strstr(palavra, str);
    if(ponteiro) //se o ponteiro for diferente de nulo
        printf("\n%c%c%c\n", *ponteiro, *(ponteiro+1), *(ponteiro+2));
    else
        printf("\nPonteiro nulo.\n");
    return 0;
}
