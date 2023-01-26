/*23) Escreva um programa que gere a saída abaixo.
Restrições:
→ A instrução “printf” pode ser utilizada no máximo 2 vezes;
→ O \n para saltar linha pode ser utilizado no máximo 2 vezes.
*
**
***
****
*****
******
*******
*********/
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"Portuguese");
    int j;
    for(int j = 0; j <= 8; j++) {
        for(int i=1; i <= j; i++) {
            printf("*");
        }
        printf("\n");
    }

    return(0);
}

