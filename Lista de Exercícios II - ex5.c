/*5) O IMC (Índice de Massa Corporal), pode ser calculado dividindo-se o peso da pessoa (em kg)
pela altura (h em metros) elevada ao quadrado (IMC= m/h2). Escreva um programa que leia o peso
e a altura de uma pessoa, calcule e mostre o IMC e a faixa em que o indivíduo se enquadra de cordo
com a tabela abaixo:*/
#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL,"Portuguese");
    float peso, altura,imc;
    printf("Digite o seu peso: ");
    scanf("%f",&peso);
    printf("Digite a sua altura: ");
    scanf("%f",&altura);
    imc = peso / (altura * altura);
    printf("O seu IMC é: %.1f\n",imc);
    if(imc > 0 && imc < 18.5){
        printf("A sua classificação é Abaixo do peso");
    }
    else if(imc >= 18,5 && imc < 25) {
        printf("A sua classificação é Peso normal");
    }
    else if(imc >= 25 && imc < 30){
        printf("A sua classificação é Sobrepeso");
    }
    else if(imc >= 30 && imc < 35){
        printf("A sua classificação é Obesidade grau 1");
    }
    else if(imc >= 35 && imc < 40){
        printf("A sua classificação é Obesidade grau 2");
    }
    else if(imc >= 40){
        printf("A sua classificação é Obesidade grau 3");
    }
return(0);
}

