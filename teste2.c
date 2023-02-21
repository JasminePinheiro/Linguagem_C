#include <stdio.h>
#include <string.h>

int main() {
    char nomes[5][25];
    int i;

    for(i = 0; i < 5; i++) {
        printf("\nInforme um nome na posição %d: ", i);
        scanf("%25[^\n]", nomes[i]);
        scanf("%c");
    }
    for(i = 0; i < 5; i++) {
        printf("Nome na posição %d = %s\n", i, nomes[i]);
    }


    return 0;
}
