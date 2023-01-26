#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"Portuguese");
    int num1 = 10;
    int num2 = 20;
    int resposta;
    num1 > num2 ? printf("sim\n"): printf("não\n");
}
