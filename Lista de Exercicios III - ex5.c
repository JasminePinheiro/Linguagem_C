/*5) Fa�a um programa que leia as notas referentes �s duas avalia��es de um aluno. Calcule e
imprima a m�dia semestral. Fa�a com que o programa s� aceite notas v�lidas (uma nota v�lida deve
pertencer entre o intervalo de 0 a 10). Cada nota deve ser validada separadamente.*/
#include <stdio.h>
#include <locale.h>
void main() {
    setlocale(LC_ALL,"Portuguese");
    float nota1,nota2, media;

    printf("Digite a primeira nota do aluno: \n");
    scanf("%f",&nota1);
    while (nota1 > 10) {
        printf("Nota inv�lida!\nDigite novamente a primeira nota do aluno: ");
        scanf("%f",&nota1);
    }
    printf("Nota v�lida!\n",nota1);
    printf("\n\n");
    printf("Digite a segunda nota do aluno: ");
    scanf("%f",&nota2);
    while (nota2 > 10) {
        printf("Nota inv�lida!\nDigite novamente a segunda nota do aluno: ");
        scanf("%f",&nota2);
    }
    printf("Nota v�lida!\n",nota2);
    printf("\n\n");
    media = (nota1 + nota2) / 2;
    printf("A m�dia �: %.1f", media);

    return(0);
}
