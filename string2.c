#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>
int main() {

    /****Como podemos contar a quantidade de caracteres de uma string******/

//Usaremos a função strlen "str (string) len (length = comprimento)"
    setlocale(LC_ALL,"Portuguese");
    int i;
    char palavra[20] = {"Oi"};
    printf("Digite algo: ");
    fgets(palavra,20,stdin);
    printf("%s",palavra);

   /**Como apagar o enter após digitar alguma palavra, para evitar problemas na quantidade de caracteres*/
    i = 0;
    while(palavra[i] != '\0') {
        if(palavra[i] == '\n')
            palavra[i] = '\0';
        i++;
    }


    printf("Tamanho: %d\n", strlen(palavra));
    return 0;
}
