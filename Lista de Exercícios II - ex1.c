#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"Portuguese");
    int val1, val2, val3;
    printf("Digite 3 n�meros aleat�rios: ");
    scanf("%d%d%d", &val1,&val2,&val3);


    if(val1 > val2 && val1 > val3 && val2 < val1 && val2 < val3){
        printf("O 1� valor � o maior\n");
        printf("O 2� valor � o menor");
    }
    else if(val2 > val1 && val2 > val3 && val3 < val2 && val3 < val1){
       printf("O 2� valor � o maior\n");
       printf("O 3� valor � o menor\n");
    }
    else if (val3 > val1 && val3 > val2 && val1 < val2 && val1< val3){
        printf("O 3� valor � o maior\n");
        printf("O 1� valor � o menor\n");
    }
    else if (val2 > val1 && val2 > val3 && val1 < val2 && val1< val3){
        printf("O 2� valor � o maior\n");
        printf("O 1� valor � o menor\n");
    }
    else if (val1 > val2 && val1 > val3 && val3 < val1 && val3 < val2){
        printf("O 1� valor � o maior\n");
        printf("O 3� valor � o menor");
    }
    else if (val3 > val2 && val3 > val1 && val2 < val3 && val2 < val1){
        printf("O 3� valor � o maior\n");
        printf("O 2� valor � o menor");
    }
    else {
        printf("Valor inv�lido");
    }
    //////////////////////////////




return(0);
}
