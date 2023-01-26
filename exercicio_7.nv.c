#include <stdio.h>
#include <locale.h>
 void main(){
    setlocale(LC_ALL,"Portuguese");
    int h, m, s, resto;
    printf("Digite o numero de segundos: ");
    scanf("%i", &s);
    h = s / 3600;
    resto = s % 3600;
    m = resto / 60;
    s = m % 60;
    printf("%d:%d:%d", h, m, s);
 }
