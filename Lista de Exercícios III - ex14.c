/*14) Faça um programa que calcule a média de salários de uma empresa, pedindo ao usuário a
quantidade de funcionários e o salário de cada funcionário. Ao final, o programa deve imprimir a
média dos salários informados, o salário mais alto e o salário mais baixo.*/
#include <stdio.h>>
#include <locale.h>
void main() {
    int func, num;
    char nome[30];
    float salario,totalsalario = 0, media, salariomenor = 9999, salariomaior = 0;
    setlocale(LC_ALL,"Portuguese");
    printf("Digite o número dos funcionários da empresa: ");
    scanf("%d",&num);
    printf("\n\n");
    for(func = 0; func < num; func++) {
        printf("Digite o nome do funcionário %d: ", func + 1);
        scanf("%s",&nome);
        printf("Digite o salário: ");
        scanf("%f",&salario);
        printf("\n\n");
        if (num > 0) {
            totalsalario += salario;
            if(salariomenor > salario)
                salariomenor = salario;
            if(salariomaior < salario)
                salariomaior = salario;
        };
    };
    media = totalsalario / num;
    printf("O total de salários: %.2f", totalsalario);
    printf("\nA média de salários: %.2f", media);
    printf("\nO salário maior: %.2f", salariomaior);
    printf("\nO salário menor: %.2f", salariomenor);
    printf("\n\n");
    return(0);
}
