#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL,"Portuguese");
    int matriz [3][3] = {{1, 2, 3},
                         {5, 7, 4},
                         {0, 1, 7}};
//ou int matriz [3][3] = {1, 2, 3, 5, 7, 4 0, 1, 7};

    printf("%i",matriz[2][0]);
    return 0;
}
