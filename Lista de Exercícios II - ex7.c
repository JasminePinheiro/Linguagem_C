/* 7) Fa�a um programa que pe�a ao usu�rio um caracter e diga se � uma vogal ou n�o.*/

#include <stdio.h>
#include <locale.h>
void main() {
    setlocale(LC_ALL,"Portuguese");
    char letra;
    printf("Digite uma letra alat�ria: ");
    scanf("%c",&letra);
    if (letra == 'a') {
        printf("A letra � uma vogal");
    } else if (letra == 'e') {
        printf("A letra � uma vogal");
    } else if (letra == 'i') {
        printf("A letra � uma vogal");
    } else if (letra == 'o') {
        printf("A letra � uma vogal");
    } else if (letra == 'u') {
        printf("A letra � uma vogal");
    } else {
        printf("A letra � uma consoante");
    }
    return(0);
}
