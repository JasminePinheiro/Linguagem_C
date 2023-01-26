#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"Portuguese");
    char palavras[] = {"C é uma linguagem muito divertida"};
    //printf("%s\n\n", palavras);
    //printf("Digite seu nome: ");
    //scanf("%s", palavras); //Nesse caso não é necessário usar o & no scanf, porque a palavra é um vetor
    /*O padrão do scanf é ler a string até o espaço*/
    printf("Segundo exemplo\n");
    printf("Digite o seu nome completo: ");
    fgets(palavras,20,stdin); //f 'file' = arquivo, get = pegar, s = string (ela é a função mais indicada para ler uma string)
    /*Ela respeita o tamanho do vetor e precisamos sempre passar três tipos de parâmetros dentro da função, o nome da variável,
    o tamanho da string e o stdin no final para indicar que será feita a leitura dos caracteres através do teclado*/

    //scanf("%200[^\n]", palavras); //Assim o scanf pode ler vários nomes
    //gets(palavras); /***** Evite de usar o gets, pois ele não leva em consideração o tamanho do vetor */

    printf("%s\n\n", palavras);



    return 0;
}
