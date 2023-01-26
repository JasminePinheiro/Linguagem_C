/* Descubra se o 1º número é divísivel pelo 2° número*/

#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"Portuguese");
    int n1, n2;
    printf("Digite um número: ");
    scanf("%d",&n1);
    printf("Digite o outro número: ");
    scanf("%d",&n2);
    if(n1 % n2  == 0){
        printf("Esse número é divisível");
    }
    else{
        printf("Esse número não é divísivel");
    }

}
