#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"Portuguese");
    float real, dolar_conv;
    printf("Digite um valor em R$: ");
    scanf("%f", &real);
    dolar_conv = real / 5.30;
    printf("O valor em reais � R$%.2f \nO valor convertido em d�lares � $%.2f", real, dolar_conv);

return(0);
}
