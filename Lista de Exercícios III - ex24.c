/*24) Voc� deve fazer um programa que apresente a sequ�ncia conforme o exemplo abaixo.
I=1 J=7
I=1 J=6
I=1 J=5
I=3 J=9
I=3 J=8
I=3 J=7
I=5 J=11
I=5 J=10
I=5 J=9
...
I=9 J=15
I=9 J=14
I=9 J=13*/

#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL,"Portuguese");
    int i, j, p, qtd;

    for(i=1; i < 10; i+=2) {
        for(j = 6 + i ; j >= 4 + i; j--)
            printf("\nI=%d \t J=%d", i, j);
        printf("\n");
    }
    return(0);
}
