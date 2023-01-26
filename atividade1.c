#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <locale.h>
int main() {
     setlocale(LC_ALL,"Portuguese");
    FILE *file1, *file2;
    char letra;
    file1 = fopen ("arq1.txt","w");
    file2 = fopen ("arq2.txt","r");
    if (file1) {
        printf("\nDigite um texto e pressione ENTER ao finalizar!\n");
        scanf("%c",&letra);
        while (letra != '\n') {
            fputc(letra,file1);
            scanf("%c",&letra);
        }
        file2 = fopen ("arq2.txt","r");
         while (letra != '\n') {
            fputc(letra,file2);
            scanf("%c",&letra);
        }
        fclose(file1);
    } else
        printf("\n\t--> ERRO ao abrir arquivo!\n");
    return(0);
}
