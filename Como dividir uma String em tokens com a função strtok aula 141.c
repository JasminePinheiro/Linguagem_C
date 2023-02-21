#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
    Aula 141: Como dividir uma String com a função strtck()
TOKEN: IRÁ DIVIDIR AS STRING
*/

int main() {
    char palavra[50] = {"Bom dia a todos"};
    char palavra2[50] = {"Boa!Tarde@a. todos"};
    char *pont;
    pont = strtok(palavra, " "); //É a maneira de como você quer dividir as strings, nesse caso foi por espaços
    while(pont) { //enquanto o ponteiro for diferente de nulo ele vai separar na tela
        printf("Token: %s\n", pont);
        pont = strtok(NULL, " "); //o NULL segnifica que é para continuar da onde parou ou seja a próxima ocorrência após o espaço
    }


    printf("\n");
    pont = strtok(palavra2, "!@ "); //podemos também passar um conjunto de simbolos
    while(pont) {
        printf("Token: %s\n",pont);
        pont = strtok(NULL,  "!@. ");
    }
    return 0;
}
