/*18) Foi feita uma pesquisa entre os habitantes de uma regi�o e foram coletados os dados de idade,
sexo (M/F) e sal�rio de X pessoas (x deve ser informado pelo usu�rio). Fa�a um algoritmo que
informe:
a) a m�dia de sal�rio do grupo;
b) a maior e a menor idade do grupo;
c) a quantidade de mulheres com sal�rio at� R$2000,00.*/
#include <stdio.h>
#include <locale.h>
int main() {
    int idade, qtdpessoas, idademaior = 0, idademenor = 9999, qtdmulheres = 0;
    float salario, totalsalario, media;
    char sexo, nome[30];
    setlocale(LC_ALL,"Portuguese");
    printf("Digite a quantidade de pessoas: ");
    scanf("%d",&qtdpessoas);
    for(int i = 1; i <= qtdpessoas; i++) {
        printf("\n\n");
        printf("Insira o nome do habitante %d: ", i);
        scanf("%s",&nome);
        printf("Insira a idade: ");
        scanf("%d",&idade);
        fflush(stdin);
        printf("Insira o sexo(F/M): ");
        scanf("%c",&sexo);
        fflush(stdin);
        printf("Insira o sal�rio: ");
        scanf("%f",&salario);
        totalsalario += salario;
        if(idademaior < idade ) {
            idademaior = idade;
        };
        if(idademenor > idade ) {
            idademenor = idade;
        };
        if(sexo == 'F' && salario <= 2000) {
            qtdmulheres++;
        };

    }
    media = totalsalario / qtdpessoas;

    printf("\n\nTotal do sal�rio do grupo: %.2f", totalsalario);
    printf("\nA m�dia do sal�rio do grupo: %.2f", media);
    printf("\nA idade maior: %d", idademaior);
    printf("\nA idade menor: %d", idademenor);
    printf("\nA quantidade de mulheres com o sal�rio at� R$2000: %d", qtdmulheres);
    printf("\n\n");
    return(0);
}
