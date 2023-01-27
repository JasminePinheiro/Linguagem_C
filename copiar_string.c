#include <stdio.h>
#include <string.h>

/*       Aula 137: Copiando uma String com a função strcpy()
*/

int main() {

    char palavra1[50] = {"bbb"};
    char palavra2[50] = {"aaa"};

    printf("\nAntes de Copiar\npalavra 1: %s\npalavra 2: %s\n", palavra1, palavra2);

    //A gente copiou a palavra 1 e colocou na palavra 2
    strcpy(palavra2, palavra1);

    //strcpy(destino, origem);


    printf("\nDepois de Copiar\npalavra 1: %s\npalavra 2: %s\n", palavra1, palavra2);

    return 0;
}
