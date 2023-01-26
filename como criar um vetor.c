//como criar um vetor
//vetor é um tipo de vriável que pode armazernar vários dados de um único tipo, também chamado de array unidimensional
#include <stdio.h>
#include <time.h>
int main() {
    int i;
    int num1[10];
    int num2[] = {1,2,3,5,6,4,1};
    int num3[5] = {1,2,3,4,5};
    char vogais [] = {'a','e','i','o','u'};
    int num4[5];
    int num5[5];
    /*srand(10);  Sempre precisamos iniciar a semente para gerar os números aleatórios, ex: 'srand(10)' porém não podemos colocar um
    número fixo, pois se não, sempre será gerado os mesmos núemeros no rand.*/
    srand(time(NULL)); //Existe uma variável que a todo momento é modificada, é a variável que armazena a hora do PC.

    /*só tomar cuidado quando foi inserir os elementos, caso o número de elementos for maior do que a quantidade que o vetor
    possa armazenar, ele não preencherá todos os números. No entanto se a quantidade de elementos for insuficiente em comparação ao número do vetor
    automaticamente será preenchido com zero o restante. */

    for(i = 0; i < 7; i++) {
        printf("%d ", num2[i]);
    }
    printf("\n\n");
    for(i = 0; i < 5; i++) {
        printf("%c ", vogais[i]);
    }
    printf("\n\n");

    for(i = 0; i < 5; i++) {
        printf("Digite o elemento da posicao %d: ",i);
        scanf("%d", &num4[i]);
    }

    for(i = 0; i < 5; i++) {
        num4[i] = num4[i] * 2;
    }
    printf("\n\n");
    for(i = 0; i < 5; i++) {
        printf("%d ", num4[i]);
    }

    //gerar números aleatórios
    for(i = 0; i < 5; i++) {
        num5[i] = 1 + rand() % 100; // os números que serão gerados são entre 1 e 100;
    }
    printf("\n\n");
    for(i = 0; i < 5; i++) {
        printf("%d ", num5[i]);
    }
        printf("\n\n");

    return(0);
}
