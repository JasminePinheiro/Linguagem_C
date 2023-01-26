#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL,"Portuguese");
    int num;
    printf("Digite um número entre 1 a 5: ");
    scanf("%i", &num);
    if(num == 1){
        printf("A\n");
    }
    else if(num == 2){
        printf("B\n");
    }
    else if(num == 3){
        printf("C\n");
    }
    else if(num == 4){
        printf("D\n");
    }
    else if(num == 5){
        printf("E\n");
    }
    return(0);
    }
