/*4) Crie um programa que permita ao usu�rio escolher entre fazer a convers�o de Real para D�lar ou
de D�lar para Real. Utilize como taxa de c�mbio $1 igual a R$5.30.*/
#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL,"Portuguese");
    float real, dolar,real_conv,dolar_conv;
    float taxa = 5.30;
    printf("Digite um valor em d�lar que deseja converter para real: ");
    scanf("%f",&dolar);
    printf("Digite um valor em real que deseja converter para dolar: ");
    scanf("%f",&real);
    real_conv = real * taxa;
    printf("Covers�o de Dolar para  Real : %.2f\n",real_conv);
    dolar_conv = dolar / taxa;
    printf("Covers�o de Real para Dolar : %.2f\n",dolar_conv);


return(0);
}
