#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL,"Portuguese");
    int num;
    printf("Digite um número entre 1 a 5: ");
    scanf("%i", &num);
    switch (num){
    case 1:
        printf("A");
        break;
    case 2:
        printf("B");
        break;
    case 3:
        printf("C");
        break;
    case 4:
        printf("D");
        break;
    case 5:
        printf("E");
        break;
    //default:
    //printf("Nenhuma das opções!");
}

}

