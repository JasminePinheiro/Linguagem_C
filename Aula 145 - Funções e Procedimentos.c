#include <stdlib.h>
#include <stdio.h>
#include <string.h>

// Aula 145: O que s�o fun��es e procedimentos?
//** Fun��o retorna algum valor
//O printf � uma fun��o pq ela est� retornando a quantidade de caracteres
// Identificador: � o nome da fun��o
// O est� dentro dos par�nteses � o que chamamos de par�metros ou argumentos

int main() {
    int tam = 0, num;
    tam = printf("Hello World:\n");
    //tam = strlen("OI"); //strlen � o identificador e o OI � o par�metro ou argumento
    tam = scanf("%d", &num); // scanf tamb�m � uma fun��o que retorna a quantidade que elementos lidos
    printf("Tamanho: %d",tam);

    return 0;
}
