#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"Portuguese");
    int idade;
    char sexo;
    printf("Digite o seu sexo M (Masculino) F (Feminino) e idade: \n");
    scanf("%c%d", &sexo,&idade);

    if (sexo == 'M' && idade >= 18) { //  && as duas condi��es tem que ser verdadeiras - || pelo menos uma condi��o tem que ser verdadeira
        printf("O alistamento � obrigat�rio");
    }
    else {
        printf("O alistamento n�o � obrigat�rio");
    }
 return(0);
}

