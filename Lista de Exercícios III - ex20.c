/*20) Uma rainha requisitou os servi�os de um monge e disse-lhe que pagaria qualquer pre�o. O
monge, necessitando de alimentos, indagou � rainha sobre o pagamento, se poderia ser feito com
gr�os de trigo dispostos em um tabuleiro de xadrez (que possui 64 casas), de tal forma que o
primeiro quadro deveria conter apenas um gr�o e os quadros subsequentes, o dobro do quadro
anterior. Crie um programa para calcular o total de gr�os de trigo que o monge recebeu.7*/

#include <stdio.h>
#include <locale.h>
int main () {
    setlocale(LC_ALL,"Portuguese");
    int g = 1,total = 0;

    for (int i = 1; i <= 7; i++) {
        total += g;
        printf("Quadro: %d \t Gr�os: %d\n",i,g);
        g = g * 2;
    }
    printf("\nO total de gr�os: %d", total);

    printf("\n\n");
    return(0);
}
