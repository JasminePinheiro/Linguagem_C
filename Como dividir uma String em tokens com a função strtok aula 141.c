#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
    Aula 141: Como dividir uma String com a fun��o strtck()
TOKEN: IR� DIVIDIR AS STRING
*/

int main() {
    char palavra[50] = {"Bom dia a todos"};
    char palavra2[50] = {"Boa!Tarde@a. todos"};
    char *pont;
    pont = strtok(palavra, " "); //� a maneira de como voc� quer dividir as strings, nesse caso foi por espa�os
    while(pont) { //enquanto o ponteiro for diferente de nulo ele vai separar na tela
        printf("Token: %s\n", pont);
        pont = strtok(NULL, " "); //o NULL segnifica que � para continuar da onde parou ou seja a pr�xima ocorr�ncia ap�s o espa�o
    }


    printf("\n");
    pont = strtok(palavra2, "!@ "); //podemos tamb�m passar um conjunto de simbolos
    while(pont) {
        printf("Token: %s\n",pont);
        pont = strtok(NULL,  "!@. ");
    }
    return 0;
}
