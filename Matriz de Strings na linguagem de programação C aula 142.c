#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
/*
    Aula 142: Matriz de String na linguagem C
*/

int main() {
    setlocale(LC_ALL,"Portuguese");
    char nomes[5][25]; //cada linnha vai armazenar um nome
    int l;
    for(l = 0; l < 5; l++) { //nesse caso não precisamos colocar dois laços de repetição, pois iremos percorrer apenas as linhas
        printf("\nDigite o nome da posição %d: ", l+1);
        fgets(nomes[l], 30, stdin);
    }
    printf("\n\n");
    for(l = 0; l < 5; l++){
        printf("\n%s", nomes[l]);
    }
    return 0;
}
