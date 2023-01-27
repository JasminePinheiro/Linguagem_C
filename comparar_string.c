#include <stdio.h>
#include <string.h>

/* Aula 136: Como comparar duas strings com a função strcmp
    0  -> as string são iguais
    -1 -> a string1 for menor que a string2
    1  -> a string1 for maior que a string2
*/

int main() {

    char palavra1[50] = {"bbb"};
    char palavra2[50] = {"aaa"};

    printf("\n\nResultado: %d\n\n", strcmp(palavra1,palavra2));
    return 0;
}
