#include <stdio.h>
#include <string.h>
#include <locale.h>

/* Aula 134: Concatenando duas strings com a função strcat()*/

int main() {
    setlocale(LC_ALL,"Portuguese");
    char palavra1[50] = {"Oi, "};
    char palavra2[50] = {"Bom dia"};


    //strcat(str1,str2)
    //strcat(palavras,"Bom dia");
    strcat(palavra1,palavra2);

    printf("\n\t%s\n", palavra1);
    return 0;
}
