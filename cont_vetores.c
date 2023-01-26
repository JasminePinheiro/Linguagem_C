#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL,"Portuguese");
    float notas[5] = {0};
    float media = 0;
    float total = 0;
    printf("Digite 5 notas diferentes: \n");
    for(int i = 0; i < 5; ++i){
        scanf("%f",&notas[i]);
    }
    for(int i = 0; i < 5; ++i){
      total = total + notas[i];
    }
    media = total/5;
    printf("A média das notas é: %.2f", media);
}
