#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "Portuguese");
    char sexo;
    int idade;
    float peso, altura;
    char nome[40];
    printf("----------Exercício 1------------\n\n");
    printf("Digite o seu nome: \n");
    nome[40] = fgetc(stdin);
    printf("Digite o seu sexo F (Feminino) M (Masculino):  \n");
    fflush(stdin);
    sexo = getc(stdin);
    printf("Digite o seu peso: \n");
    fflush(stdin);
    scanf("%f", &peso);
    printf("Digite a sua altura: \n");
    fflush(stdin);
    scanf("%f",&altura);
    return(0);
}
