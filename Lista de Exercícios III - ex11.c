/*11) Um determinado material radioativo perde metade de sua massa a cada 50 segundos. Dada a
massa inicial, em gramas, faça um programa que determine o tempo necessário para que essa massa
se torne menor que 0,05 gramas.*/
#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL,"Portuguese");
    int cont_massa=0, min, seg, i;
    float massa;
    printf("Digite a massa em gramas: ");
    scanf("%f",&massa);
    printf("\n");
    for(i=0; massa>=0.05; i+=50) {
        cont_massa = cont_massa - massa;
        printf("%d Segundos \tmassa: %.2f\n",i,massa);
        massa = massa / 2;
    }
    min = i / 60;
    seg = i % 60;
    printf("\n\nO tempo necessário aproximadamente em minutos: %d:%ds\n\n", min,seg);

    return(0);
}
