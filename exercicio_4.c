#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
int main(){
    setlocale(LC_ALL,"Portuguese");
    float despesa, val_pessoa, total;
    int  num_pessoas, val_gorjeta;
     printf("Digite o valor da despesa do restaurante: \n");
     scanf("%f", &despesa);
     fflush(stdin);
     printf("Digite o valor da gorjeta em '%%': \n");
     scanf("%i", &val_gorjeta);
     printf("Digite a quantidade de pessoas que vão dividir a conta: \n");
     fflush(stdin);
     scanf("%i", &num_pessoas);
     total = (despesa * val_gorjeta/100) + despesa;
     printf("O valor total da despesa com a gojerta: %.2f\n", total);
     val_pessoa = total / num_pessoas;
     printf("O valor que cada pessoa deverá pagar: %.2f\n", val_pessoa);


    return(0);
}
