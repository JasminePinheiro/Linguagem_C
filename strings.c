#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"Portuguese");
    char palavras[] = {"C � uma linguagem muito divertida"};
    //printf("%s\n\n", palavras);
    //printf("Digite seu nome: ");
    //scanf("%s", palavras); //Nesse caso n�o � necess�rio usar o & no scanf, porque a palavra � um vetor
    /*O padr�o do scanf � ler a string at� o espa�o*/
    printf("Segundo exemplo\n");
    printf("Digite o seu nome completo: ");
    fgets(palavras,20,stdin); //f 'file' = arquivo, get = pegar, s = string (ela � a fun��o mais indicada para ler uma string)
    /*Ela respeita o tamanho do vetor e precisamos sempre passar tr�s tipos de par�metros dentro da fun��o, o nome da vari�vel,
    o tamanho da string e o stdin no final para indicar que ser� feita a leitura dos caracteres atrav�s do teclado*/

    //scanf("%200[^\n]", palavras); //Assim o scanf pode ler v�rios nomes
    //gets(palavras); /***** Evite de usar o gets, pois ele n�o leva em considera��o o tamanho do vetor */

    printf("%s\n\n", palavras);



    return 0;
}
