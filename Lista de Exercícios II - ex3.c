#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "Portuguese");
    int num, resultado1, resultado2, resultado3;
    printf("Digite um número aleatório: \n");
    scanf("%d",&num);

    resultado1 = num % 2;
    resultado2 = num % 3;
    resultado3 = num % 5;

    printf("%i\n",resultado1);
    printf("%i\n",resultado2);
    printf("%i\n\n",resultado3);



    if (resultado1 == 0 && resultado3 == 0){
        printf("O número é divisível por 2 e por 5");
    }
    else if (resultado2 == 0 && resultado3 == 0){
        printf("O número é divisível por 3 e por 5");
    }
    else if(resultado2 == 0){
        printf("O número é divisível por 3\n");
    }
    else if(resultado3 == 0){
        printf("O número é divísível por 5\n");
    }
     else if (resultado1 == 0){
        printf("O número é divisível por 2\n");
    }
    else{
        printf("Não é divisível por nenhum deles\n");
    }
return(0);
}
