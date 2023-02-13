#include <stdlib.h>
#include <stdio.h>
#include <string.h>

// Aula 147 - Criando um procedimento para imprimir uma string

//tipo de retorno - identificador - par�metros

int minhaStrlen(char str[]) { // estamos recebendo uma string por isso colocamos o par de []

    int tam = 0;
    //oi
    while(str[tam] != '\0') {
        tam++;
    }
    return tam;
};

void imprimirString(char palavra[]) {
    int i = 0;
    while(palavra[i] != '\0') {
        printf("%c", palavra[i]);
        i++;
    }
    printf("\n");

} // o procedimento n�o ir� retornar nada void = vazio. Essa � a diferen�a entre procedimento e fun��es.

int main() {

    char vet[20] = {"Ola.Bom dia"};
    printf("strlen: %d\n", strlen(vet));
    printf("minhaStrlen: %d\n", minhaStrlen(vet));
    imprimirString(vet);

    return 0;
}
