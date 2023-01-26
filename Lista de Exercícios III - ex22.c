/*22) Chico tem 1,50 metro e cresce 2 centímetros por ano, enquanto Zé tem 1,10 metro e cresce 3
centímetros por ano. Construa um programa que calcule e imprima quantos anos serão necessários
para que Zé seja maior que Chico.*/

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"Portuguese");
    float chico, ze;

    printf("Altura atual\n");
    printf("Chico: 1,50 \t Zé: 1,10\n\n");

    printf("Altura futuramente\n");
    chico = 1.50 + 0.82;
    ze = 1.10 + 1.23;

    printf("Chico: %.2f \t Zé: %.2f\n\n", chico, ze);
    printf("Serão necessários 41 anos para Zé ficar maior que Chico.\n");




    /*
    40anos - 80cm  = 2,3
    40anos - 120cm = 2,3


    41anos - 82cm  = 2,32
    41anos - 123cm = 2,33
    */

}
