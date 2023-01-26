/*9) Um usuário deseja um programa onde possa escolher que tipo de média deseja calcular a partir
de três notas. Faça um programa que leia as notas e o tipo da média escolhida pelo usuário e calcule
a apresente a média:
Opções:
• ‘a’ - Aritmética.
• ‘p’ - Ponderada (pesos: 3,3,4).*/
#include <stdio.h>
#include <locale.h>
void main() {
    setlocale(LC_ALL,"Portuguese");
    float nota1,nota2,nota3,media_arit,media_pond;
    char media;
    printf("Digite três notas: ");
    scanf("%f%f%f",&nota1,&nota2,&nota3);
    printf("Qual é o tipo de média que você deseja calcular, digite A (aritmética) ou P (ponderada)? ");
    fflush(stdin);
    scanf("%c",&media);
    if(media == 'A') {
        media_arit = (nota1 + nota2 + nota3) /3;
        printf("A média aritmética é %.1f",media_arit);
    } else if(media == 'P') {
        media_pond = (nota1 * 3 + nota2 * 3 + nota3 * 4) / 3;
        printf("A média ponderada é %.1f", media_pond);
    }

    return(0);
}
