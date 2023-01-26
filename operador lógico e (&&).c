#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"Portuguese");
    int idade;
    char sexo;
    printf("Digite o seu sexo M (Masculino) F (Feminino) e idade: \n");
    scanf("%c%d", &sexo,&idade);

    if (sexo == 'M' && idade >= 18) { //  && as duas condições tem que ser verdadeiras - || pelo menos uma condição tem que ser verdadeira
        printf("O alistamento é obrigatório");
    }
    else {
        printf("O alistamento não é obrigatório");
    }
 return(0);
}

