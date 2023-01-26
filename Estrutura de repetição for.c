#include <stdio.h>
#include <locale.h>
void main() {
    setlocale(LC_ALL,"Portuguese");
    int i,j,k;
    for(i = 0; i <= 10; i++)
        printf("%d ",i);
    printf("\n\n");

    for(j = 10; j >= 0; j--)
        printf("%d ",j);

    printf("\n\n");

    for(k = 1; k <= 100; k++)
        if(k % 2 != 0)
            printf("%d ",k);

    printf("\n\n");

    for(k = 1; k <= 100; k+=2)
        printf("%d ",k);

    return(0);
}
