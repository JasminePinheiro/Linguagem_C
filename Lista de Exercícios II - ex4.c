/*4) Crie um programa que permita ao usuário escolher entre fazer a conversão de Real para Dólar ou
de Dólar para Real. Utilize como taxa de câmbio $1 igual a R$5.30.*/
#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL,"Portuguese");
    float real, dolar,real_conv,dolar_conv;
    float taxa = 5.30;
    printf("Digite um valor em dólar que deseja converter para real: ");
    scanf("%f",&dolar);
    printf("Digite um valor em real que deseja converter para dolar: ");
    scanf("%f",&real);
    real_conv = real * taxa;
    printf("Coversão de Dolar para  Real : %.2f\n",real_conv);
    dolar_conv = dolar / taxa;
    printf("Coversão de Real para Dolar : %.2f\n",dolar_conv);


return(0);
}
