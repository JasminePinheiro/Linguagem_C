//Colocar qualque número invertido

#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"Portuguese");
    int num, num_invertido;
    printf("Digite um número: ");
    scanf("%d",&num);
    if(num >=0){
        do{
            num_invertido = num % 10;
            printf("%d",num_invertido);
            num = num / 10;}
        while(num != 0);
    }
    else if( num < 1){
        num = num * -1;
        printf("-");

        do{
        num_invertido = num % 10;
        printf("%d",num_invertido);
        num = num / 10;}

        while(num != 0);
    }

}

