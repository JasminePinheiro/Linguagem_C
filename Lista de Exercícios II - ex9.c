/*9) Um usu�rio deseja um programa onde possa escolher que tipo de m�dia deseja calcular a partir
de tr�s notas. Fa�a um programa que leia as notas e o tipo da m�dia escolhida pelo usu�rio e calcule
a apresente a m�dia:
Op��es:
� �a� - Aritm�tica.
� �p� - Ponderada (pesos: 3,3,4).*/
#include <stdio.h>
#include <locale.h>
void main() {
    setlocale(LC_ALL,"Portuguese");
    float nota1,nota2,nota3,media_arit,media_pond;
    char media;
    printf("Digite tr�s notas: ");
    scanf("%f%f%f",&nota1,&nota2,&nota3);
    printf("Qual � o tipo de m�dia que voc� deseja calcular, digite A (aritm�tica) ou P (ponderada)? ");
    fflush(stdin);
    scanf("%c",&media);
    if(media == 'A') {
        media_arit = (nota1 + nota2 + nota3) /3;
        printf("A m�dia aritm�tica � %.1f",media_arit);
    } else if(media == 'P') {
        media_pond = (nota1 * 3 + nota2 * 3 + nota3 * 4) / 3;
        printf("A m�dia ponderada � %.1f", media_pond);
    }

    return(0);
}
