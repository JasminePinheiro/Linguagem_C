/*1) Elabore um programa em C para ler do teclado um valor inteiro entre 1 e 10 e apresentar a
tabuada.*/
#include <stdio.h>
#include <locale.h>
void main() {
    setlocale(LC_ALL,"Portuguese");
    int valor, resultado;
    int cont = 1;
    printf("Digite um número inteiro entre 1 e 10: \n");
    scanf("%d",&valor);
    while (cont <= 10){
            resultado = (valor * cont);
        printf("%d x %d = %d\n", valor,cont,resultado);
        cont++;
    }
    for (cont = 1; cont <=10; cont++){
        resultado = (valor * cont);
        printf("%d x %d = %d\n",valor,cont,resultado);
    }
    return(0);
}
