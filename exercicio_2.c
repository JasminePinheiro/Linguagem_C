    /*25.08.2022
    Produza um programa para que o valor que incialmente estava na variável 'a' possua o valor
    que estava na variável 'b' o valor que incialmente estava na variável 'b' possua o valor
    que estava na variável 'a'*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){

    setlocale(LC_ALL,"Portuguese");
        int a, b, c, d;

        printf("Digite um número: \n");
        scanf("%i",&a);
        printf("Digite um outro número: \n");
        scanf("%i", &b);
        d = b;
        printf("O valor atual de 'a' é: %i\n", d);
        c = a;
        printf("O valor atual de 'b' é: %i\n", c);

return(0);
}
