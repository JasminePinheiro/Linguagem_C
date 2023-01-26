/* 7) Faça um programa que peça ao usuário um caracter e diga se é uma vogal ou não.*/

#include <stdio.h>
#include <locale.h>
void main() {
    setlocale(LC_ALL,"Portuguese");
    char letra;
    printf("Digite uma letra alatória: ");
    scanf("%c",&letra);
    if (letra == 'a') {
        printf("A letra é uma vogal");
    } else if (letra == 'e') {
        printf("A letra é uma vogal");
    } else if (letra == 'i') {
        printf("A letra é uma vogal");
    } else if (letra == 'o') {
        printf("A letra é uma vogal");
    } else if (letra == 'u') {
        printf("A letra é uma vogal");
    } else {
        printf("A letra é uma consoante");
    }
    return(0);
}
