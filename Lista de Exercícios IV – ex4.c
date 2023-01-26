/*4) Uma pequena loja de artesanato possui apenas um vendedor e comercializa 10 tipos de objetos
diferentes. O vendedor recebe um sal�rio de R$1100,00 acrescido de 5% do valor total de suas
vendas. O valor unit�rio dos objetos deve ser informado e armazenado em um vetor; a quantidade
vendida de cada objeto deve ficar em outro vetor, mas na mesma posi��o. Crie um programa que
receba os pre�os e as quantidades vendidas, armazenando-os em seus respectivos vetores. Depois,
determine e mostre:
a) A quantidade vendida, valor unit�rio e valor total de cada objeto. Ao final, dever�o ser mostrados
o valor total das vendas e o valor da comiss�o que ser� paga ao vendedor.
b) O valor do objeto mais vendido e sua posi��o no vetor (em caso de empates mostre todos
empatados).*/

#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL,"Portuguese");
    int qtd [10] = {1,2,3,4,5,6,7,8,9,10};
    int vetor_qtd[10] = {1,2,3,4,5,6,7,8,9,10};
    float vetor_valor[] = {1,2,3,5,6,6,66,4,46,8,64,64,8,8,6};
    float total_geral = 0,total_de_cad_prodt = 0, comissao;
    int i,qtd_maior=0;

    printf("Digite a quantidade vendida de cada produto\n");
    for(i = 1; i < qtd[i]; i++) {
        printf("Produto %i: ", i);
        scanf("%d",&vetor_qtd[i]);
        if(qtd_maior < vetor_qtd[i]) {
            qtd_maior = vetor_qtd[i];
        }
    }

    printf("\nDigite o pre�o de cada produto\n");
    for(i = 1; i < qtd[i]; i++) {
        printf("Produto %i: R$ ", i);
        scanf("%f",&vetor_valor[i]);
    }

    printf("\nValor total de cada produto\n");
    for(i = 1; i < qtd[i]; i++) {
        total_de_cad_prodt = vetor_qtd[i] * vetor_valor[i];
        printf("Produto %i: R$ %.2f\n", i, total_de_cad_prodt);
        total_geral+=total_de_cad_prodt;
    }
    printf("\n");
    for(i = 1; i < qtd[i]; i++) {
        if(qtd_maior == vetor_qtd[i]) {
            printf("O valor do objeto mais vendido �: R$%.2f e est� na posi��o: %d\n",vetor_valor[i],i);
        }
    }

    printf("\nValor total das vendas: R$%.2f",total_geral);
    comissao = total_geral * 0.05 + total_geral;
    comissao = comissao + 1100,00;
    printf("\nSal�rio do vendedor com a comiss�o: R$%.2f\n\n",comissao);


    return 0;
}
