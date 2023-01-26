/*10) Faça um programa que, dado três valores a, b e c, verifique se eles podem ser os comprimentos
dos lados de um triângulo. Caso positivo, seu programa deve informar também se o triângulo é
equilátero, isósceles ou escaleno. Caso contrário, seu programa deve escrever a mensagem “Não
formam um triângulo”.*/
#include <stdio.h>
#include <locale.h>
void main() {
    setlocale(LC_ALL,"Portuguese");
    int a, b, c;
    printf("Digite três valores: ");
    scanf("%i%i%i",&a,&b,&c);
    if (a != b && a != c && b && c) {
        printf("Triângulo escaleno");
    } else if (a == b && a == c && b == c) {
        printf("Triângulo equilátero");
    } else if (a == b || a == c || b == c) {
        printf("Triângulo isóceles");
    }
    return(0);
}

