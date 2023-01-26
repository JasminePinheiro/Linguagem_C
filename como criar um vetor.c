//como criar um vetor
//vetor � um tipo de vri�vel que pode armazernar v�rios dados de um �nico tipo, tamb�m chamado de array unidimensional
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
    /*srand(10);  Sempre precisamos iniciar a semente para gerar os n�meros aleat�rios, ex: 'srand(10)' por�m n�o podemos colocar um
    n�mero fixo, pois se n�o, sempre ser� gerado os mesmos n�emeros no rand.*/
    srand(time(NULL)); //Existe uma vari�vel que a todo momento � modificada, � a vari�vel que armazena a hora do PC.

    /*s� tomar cuidado quando foi inserir os elementos, caso o n�mero de elementos for maior do que a quantidade que o vetor
    possa armazenar, ele n�o preencher� todos os n�meros. No entanto se a quantidade de elementos for insuficiente em compara��o ao n�mero do vetor
    automaticamente ser� preenchido com zero o restante. */

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

    //gerar n�meros aleat�rios
    for(i = 0; i < 5; i++) {
        num5[i] = 1 + rand() % 100; // os n�meros que ser�o gerados s�o entre 1 e 100;
    }
    printf("\n\n");
    for(i = 0; i < 5; i++) {
        printf("%d ", num5[i]);
    }
        printf("\n\n");

    return(0);
}
