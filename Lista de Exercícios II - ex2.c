#include <stdio.h>
#include <locale.h>
int main(){
   setlocale(LC_ALL, "Portuguese");
    int num1, num2, num3, num4, num5;
    printf("Digite cinco númmero aleatórios: ");
    scanf("%d%d%d%d%d",&num1,&num2,&num3,&num4,&num5);

    num1 < 0? printf("negativo\n") : printf("positivo\n");
    num2 < 0? printf("negativo\n") : printf("positivo\n");
    num3 < 0? printf("negativo\n") : printf("positivo\n");
    num4 < 0? printf("negativo\n") : printf("positivo\n");
    num5 < 0? printf("negativo\n") : printf("positivo\n");


return(0);
}
