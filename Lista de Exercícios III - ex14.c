/*14) Fa�a um programa que calcule a m�dia de sal�rios de uma empresa, pedindo ao usu�rio a
quantidade de funcion�rios e o sal�rio de cada funcion�rio. Ao final, o programa deve imprimir a
m�dia dos sal�rios informados, o sal�rio mais alto e o sal�rio mais baixo.*/
#include <stdio.h>>
#include <locale.h>
void main() {
    int func, num;
    char nome[30];
    float salario,totalsalario = 0, media, salariomenor = 9999, salariomaior = 0;
    setlocale(LC_ALL,"Portuguese");
    printf("Digite o n�mero dos funcion�rios da empresa: ");
    scanf("%d",&num);
    printf("\n\n");
    for(func = 0; func < num; func++) {
        printf("Digite o nome do funcion�rio %d: ", func + 1);
        scanf("%s",&nome);
        printf("Digite o sal�rio: ");
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
    printf("O total de sal�rios: %.2f", totalsalario);
    printf("\nA m�dia de sal�rios: %.2f", media);
    printf("\nO sal�rio maior: %.2f", salariomaior);
    printf("\nO sal�rio menor: %.2f", salariomenor);
    printf("\n\n");
    return(0);
}
