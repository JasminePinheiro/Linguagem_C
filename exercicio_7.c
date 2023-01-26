#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL, "Portuguese");
    int horas, minutos, segundos;

    printf("Digite o número de segundos: ");
    scanf("%i", &segundos);
    minutos = segundos / 60;
    printf("Segundos convertidos em minutos: %i\n", minutos);
    horas = segundos / 3600;
    printf("Segundos convertidos em horas: %i\n", horas);

return(0);
}
