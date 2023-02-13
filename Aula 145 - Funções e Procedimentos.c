#include <stdlib.h>
#include <stdio.h>
#include <string.h>

// Aula 145: O que são funções e procedimentos?
//** Função retorna algum valor
//O printf é uma função pq ela está retornando a quantidade de caracteres
// Identificador: é o nome da função
// O está dentro dos parênteses é o que chamamos de parâmetros ou argumentos

int main() {
    int tam = 0, num;
    tam = printf("Hello World:\n");
    //tam = strlen("OI"); //strlen é o identificador e o OI é o parâmetro ou argumento
    tam = scanf("%d", &num); // scanf também é uma função que retorna a quantidade que elementos lidos
    printf("Tamanho: %d",tam);

    return 0;
}
