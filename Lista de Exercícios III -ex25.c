/*25) Escreva um programa que leia dois valores X e Y. A seguir, mostre uma sequ�ncia de 1 at� Y,
passando para a pr�xima linha a cada X n�meros.
Exemplo de entrada:
3 99
Exemplo de sa�da:
1 2 3
4 5 6
7 8 9
10 11 12
...
97 98 99*/

#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL,"Portuguese");
    int x,y;
    printf("Insira dois valores X e Y:\n");
    scanf("%d%d",&x,&y);
    for(int i = 1; i <= y; i++) {
        for(int y = 1; y <= x; y++) {
            printf("%d ", i);
        }
        printf("\n");
    }
        return(0);
    }
