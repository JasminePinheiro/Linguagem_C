#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
void main(){
    int num_dias;
    int val_dia = 45;
    int irpf = 8;
    float val_liquido, val_bruto, val_irpf;
    setlocale(LC_ALL,"Portuguese");
    printf("Digite o número de dias trabalhados pelo encanador: \n");
    scanf("%i",&num_dias);
    val_bruto = val_dia * num_dias;
    printf("O Valor Bruto: %.2f\n", val_bruto);
    val_irpf = (val_bruto * irpf/100);
    val_liquido = val_bruto - val_irpf;
    printf("O Valor Líquido: %.2f\n", val_liquido);
    return(0);

}
