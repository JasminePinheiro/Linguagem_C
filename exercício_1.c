#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"Portuguese");
    char letra, letra2, letra3;

    printf("Digite uma letra: ");
    letra = getchar(); //getchar retorna um valor
    printf("Caracter lido: %c\n", letra);
    fflush(stdin);

    printf("Digite uma outra letra: ");
    letra2 = getc(stdin); //getc tbm retorna um valor, adicionamos uma fun��o stdin para informar ao programa que a entrada de dados ser� atrav�s do teclado
    printf("Caracter lido: %c\n", letra2);

    printf("Digite uma outra letra: ");
    fflush(stdin);
    letra3 = fgetc(stdin); //fgetc normalmente � usado para leitura de dados de arquivos, por isso ele tem o F na frente, v�m de FILE, adicionamos uma fun��o stdin para informar ao programa que a entrada de dados ser� atrav�s do teclado.
    printf("Caracter lido: %c\n", letra3);

}
