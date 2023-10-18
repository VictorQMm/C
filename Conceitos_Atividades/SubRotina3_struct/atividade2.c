#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct funcionario{
char nome[50];
int idade;
char sexo;
float cpf;
int nasc;
int cod;
char cargo[30];
float salario;
};

typedef struct funcionario func;

void cadastrarInfos(func *func){
    printf("Nome: ");
    gets(func -> nome);
    fflush(stdin);

    printf("Idade: ");
    scanf("%d", &func -> idade);
    fflush(stdin);
    
    printf("Sexo: ");
    scanf(" %c", &func -> sexo);
    fflush(stdin);

    printf("CPF: ");
    scanf("%f", &func -> cpf);
    fflush(stdin);


    printf("Data de Nascimento: ");
    scanf("%d", &func -> nasc);
    fflush(stdin);

    printf("Codigo: ");
    scanf("%d", &func -> cod);
    fflush(stdin);

    printf("Cargo: ");
    gets(func -> cargo);
    fflush(stdin);

    printf("Salario: ");
    scanf("%f", &func -> salario);
}

int main(){
    func funcionario;

    cadastrarInfos(&funcionario);

   
   printf("\nDados do funcionario:\n");
    printf("Nome: %s\n", funcionario.nome);
    printf("Idade: %d\n", funcionario.idade);
    printf("Sexo: %c\n", funcionario.sexo);
    printf("CPF: %.f\n", funcionario.cpf);
    printf("Data de Nascimento: %d\n", funcionario.nasc);
    printf("Codigo do Setor: %d\n", funcionario.cod);
    printf("Cargo: %s\n", funcionario.cargo);
    printf("Salario: %.2f\n", funcionario.salario);
}
