    /*25.08.2022
    Produza um programa para que o valor que incialmente estava na vari�vel 'a' possua o valor
    que estava na vari�vel 'b' o valor que incialmente estava na vari�vel 'b' possua o valor
    que estava na vari�vel 'a'*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){

    setlocale(LC_ALL,"Portuguese");
        int a, b, c, d;

        printf("Digite um n�mero: \n");
        scanf("%i",&a);
        printf("Digite um outro n�mero: \n");
        scanf("%i", &b);
        d = b;
        printf("O valor atual de 'a' �: %i\n", d);
        c = a;
        printf("O valor atual de 'b' �: %i\n", c);

return(0);
}
