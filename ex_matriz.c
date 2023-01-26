#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL,"Portuguese");
    float notas[4][4];
    float media = 0;
    float total = 0;
    printf("Digite as notas dos alunos \n");
    for(int i = 0; i < 4; ++i){
        for(int j = 0; j < 4; ++j){
        scanf("%f",&notas[i][j]);
        }
        }

        media = total/4
}
