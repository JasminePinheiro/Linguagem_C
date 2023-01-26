#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

typedef struct struct_funcionario{
    int ID;
    char nome[30];
    int idade;
    float salario;
}FUNCIONARIO;

FUNCIONARIO func[5];

void col_func();
void print_func();
void reajuste(float *salario);
void rel_salario_corrigido();


void main(){
    setlocale(LC_ALL, "Portuguese");
    col_func();
    system("cls");
    print_func();
    for(int i = 0; i < 5; i++){
        reajuste(&func[i].salario);
    }
    rel_salario_corrigido();
}


void col_func(){
    for(int i = 0; i < 5; i++){
        printf("\nFUNCION�RIO %d\n", i+1);
        printf("Insira o nome do funcion�rio: ");
        scanf("%s", &func[i].nome);
        printf("Insira a idade do funcion�rio: ");
        scanf("%d", &func[i].idade);
        printf("Insira o sal�rio do funcion�rio: ");
        scanf("%f", &func[i].salario);
        func[i].ID = i+1;
    }
}

void print_func(){
    for(int i = 0; i < 5; i++){
        printf("\n\nFuncion�rio %d) ID: %d, nome: %s, idade: %d, salario: %.2f\n\n",
        func[i].ID ,func[i].ID, func[i].nome, func[i].idade, func[i].salario);
    }
}

void reajuste(float *salario){
    *salario = *salario + (*salario*0.1);
}

void rel_salario_corrigido(){
    for(int i = 0; i < 5; i++){
        printf("\n\nFuncion�rio: %s, novo sal�rio: %.2f\n\n",
        func[i].nome, func[i].salario);
    }
}
