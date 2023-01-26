/*19) Escreva um programa para ler as coordenadas (X,Y) de uma quantidade indeterminada de
pontos no sistema cartesiano. Para cada ponto escrever o quadrante a que ele pertence. O algoritmo
será encerrado quando pelo menos uma de duas coordenadas for NULA (nesta situação sem
escrever mensagem alguma).
Exemplo de entrada:
2 2
3 -2
-8 -1
-7 1
0 2
Exemplo de saída:
primeiro
quarto
terceiro
segundo*/

#include <stdio.h>
#include <locale.h>
int main() {
    int x, y;
    setlocale(LC_ALL,"Portuguese");
    printf("Digite dois números para as coordenadas (X,Y)\n\n");
    do {
        printf("Insira a coordenada X: \n");
        scanf("%d",&x);
        printf("Insira a coordenada y: \n");
        scanf("%d",&y);

        if(x > 0 && y > 0) {
            printf("Primeiro\n\n\n");
        }
        if(x > 0 && y < 0 ) {
            printf("Quarto\n\n\n");
        }
        if(x < 0 && y < 0) {
            printf("Terceiro\n\n\n");
        }
        if(x < 0 && y > 0 ) {
            printf("Segundo\n\n\n");
        }

    } while(x && y != 0);

    return(0);
}
