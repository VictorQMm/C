// A prefeitura de uma cidade fez uma pesquisa entre seus habitantes, coletando dados sobre o salário, idade, sexo e número de filhos. Crie um programa em C (utilizando registros) que leia os dados de um número indeterminado de pessoas (assumir que idade=0 deve sair do programa) e, ao final, mostre:

// a) A média de idade das mulheres com salário inferior a R$ 300,00;
// b) A média de salário da população;
// c) A média do número de filhos;
// d) O maior salário;
// e) A menor idade.

#include <stdio.h>
#include <stdlib.h>

struct habitantes {
    float salario;
    int idade = 0;
    char sexo;
    int filhos;
};
typedef struct habitantes Hab;

main() {
    Hab v[3];

    for(int i = 0; i < 3; i++) {

        printf("\nInsira o salario: ");
        scanf("%d", &v[i].salario);
        fflush(stdin);

        printf("\nInsira a idade: ");
        scanf("%d", &v[i].idade);

        printf("\nInsira o sexo M/F: ");
        scanf("%c", &v[i].sexo);

        printf("\nInsira o tanto de filhos: ");
        scanf("%.1d", &v[i].filhos);
    }
}