/*10) Você decidiu ficar rico guardando dinheiro por 30 dias consecutivos. Para tal, decidiu guardar 1
centavo no primeiro dia, 2 centavos no segundo dia, 4 centavos no terceiro dia, 8 centavos no quarto
dia, e assim por diante. Faça um programa para calcular quanto você terá ao final dos 30 dias.*/
#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL,"Portuguese");
    int contador = 0,centavos = 1,i;
    float vl, soma;
    for(i=1; i<=30; i++) {
        contador = contador + centavos;
        printf("Dia: %i\t\tCentavos: %i\n",i,centavos);
        centavos = centavos * 2;
    };
    printf("%d\n", contador);

    printf("%.1f\n",contador /100.0);

    return(0);
}
