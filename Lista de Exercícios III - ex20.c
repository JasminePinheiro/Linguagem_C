/*20) Uma rainha requisitou os serviços de um monge e disse-lhe que pagaria qualquer preço. O
monge, necessitando de alimentos, indagou à rainha sobre o pagamento, se poderia ser feito com
grãos de trigo dispostos em um tabuleiro de xadrez (que possui 64 casas), de tal forma que o
primeiro quadro deveria conter apenas um grão e os quadros subsequentes, o dobro do quadro
anterior. Crie um programa para calcular o total de grãos de trigo que o monge recebeu.7*/

#include <stdio.h>
#include <locale.h>
int main () {
    setlocale(LC_ALL,"Portuguese");
    int g = 1,total = 0;

    for (int i = 1; i <= 7; i++) {
        total += g;
        printf("Quadro: %d \t Grãos: %d\n",i,g);
        g = g * 2;
    }
    printf("\nO total de grãos: %d", total);

    printf("\n\n");
    return(0);
}
