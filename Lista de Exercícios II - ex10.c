/*10) Fa�a um programa que, dado tr�s valores a, b e c, verifique se eles podem ser os comprimentos
dos lados de um tri�ngulo. Caso positivo, seu programa deve informar tamb�m se o tri�ngulo �
equil�tero, is�sceles ou escaleno. Caso contr�rio, seu programa deve escrever a mensagem �N�o
formam um tri�ngulo�.*/
#include <stdio.h>
#include <locale.h>
void main() {
    setlocale(LC_ALL,"Portuguese");
    int a, b, c;
    printf("Digite tr�s valores: ");
    scanf("%i%i%i",&a,&b,&c);
    if (a != b && a != c && b && c) {
        printf("Tri�ngulo escaleno");
    } else if (a == b && a == c && b == c) {
        printf("Tri�ngulo equil�tero");
    } else if (a == b || a == c || b == c) {
        printf("Tri�ngulo is�celes");
    }
    return(0);
}

