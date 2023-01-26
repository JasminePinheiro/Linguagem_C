#include <stdio.h>
#include <locale.h>

void soma(int *a, int *b, int *c) {
    *a = *a +100;
    *b = *b +100;
    *c = *c +100;

}
int main() {
    setlocale(LC_ALL,"Portuguese");
    int num1, num2, num3;
    printf("Valores digitados pelo usuário.\n");
    printf("Digite o 1° número: ");
    scanf("%i",&num1);
    printf("Digite o 2° número: ");
    scanf("%i",&num2);
    printf("Digite o 3° número: ");
    scanf("%i",&num3);

    printf("\n\n");

    printf("Valores digitados pelo usuário (+) 100\n");
    soma(&num1,&num2,&num3);
    printf("1° número: %i\n", num1);
    printf("2° número: %i\n", num2);
    printf("3° número: %i\n", num3);
    return(0);
}
