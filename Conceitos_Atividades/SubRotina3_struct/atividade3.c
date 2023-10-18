#include <stdio.h>
#include <stdlib.h>

struct vendedor{
    float salario;
    float totalVendas;
    float comissao;
    float salarioF;
};

typedef struct vendedor vendedor;

void calculoComissao(vendedor *vendedor){
    printf("\n Digite o valor do seu salario fixo: ");
    scanf("%f", &vendedor -> salario);

    printf("\n Digite o valor do total de vendas: ");
    scanf("%f", &vendedor -> totalVendas);

    vendedor -> comissao =  0.06 * vendedor -> totalVendas;
    vendedor -> salarioF = vendedor -> comissao + vendedor -> salario;
}

main(){
    struct vendedor vendedor1, vendedor2;

    printf("Dados vendedor 1: ");
    calculoComissao(&vendedor1);

    printf("Dados vendedor 2: ");
    calculoComissao(&vendedor2);

       printf("\nDados do vendedor 1:\n");
    printf("Salario Fixo: %.2f\n", vendedor1.salario);
    printf("Total de vendars: %.2f\n", vendedor1.totalVendas);
    printf("Comissao: %.2f\n", vendedor1.comissao);
    printf("Salario Final: %.2f\n", vendedor1.salarioF);

     printf("\nDados do vendedor 2:\n");
    printf("Salario Fixo: %.2f\n", vendedor2.salario);
    printf("Total de vendars: %.2f\n", vendedor2.totalVendas);
    printf("Comissao:%.2f\n", vendedor2.comissao);
    printf("Salario Final: %.2f\n", vendedor2.salarioF);
    
}
