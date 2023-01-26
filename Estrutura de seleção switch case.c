#include <stdio.h>
#include <locale.h>
int main(){
    int num;
        setlocale(LC_ALL,"Portuguese");
        printf("Digite um número entre 1 a 5:  ");
        scanf("%d", &num);
        switch(num){
        case 1:                                 //Podemos usar caracteres ex: case 'a'.
            printf("Cadastrar produto");
            break;
             case 2:
                printf("Vender produto");
                break;
                 case 3:
                    printf("Buscar produto");
                    break;
                     case 4:
                        printf("Imprimir produto");
                        break;
                         case 5:
                            printf("Sair");
                            break;
                               default:
                               printf("Nenhuma das opções");
        }


return(0);
}
