/*2) Escreva um programa que repita a leitura de uma senha at� que ela seja v�lida. Para cada leitura
de senha incorreta informada, escrever a mensagem �Senha Invalida�. Quando a senha for
informada corretamente deve ser impressa a mensagem �Acesso Permitido� e o programa deve ser
encerrado. Considere que a senha correta � o valor 123456.*/
#include <stdio.h>
#include <locale.h>
void main() {
    setlocale(LC_ALL,"Portuguese");
    int senha;
    printf("Digite uma senha com seis n�meros: ");
    scanf("%d",&senha);
    while(senha != 123456) {
        printf("Senha Invalida! \nDigite novamennte a senha: ");
        scanf("%d",&senha);
    }
    printf("Acesso Permitido");
    return(0);
}
