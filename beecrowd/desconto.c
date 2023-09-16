#include<stdio.h>
#include<stdlib.h>
main(){
    float preco,desc;
    scanf("%f",&preco);
    desc=preco*0.15;
    preco=preco-desc;
    printf("Valor final: %f \n",preco);                 // %f -> Quarda o valor de uma variável.
    system("pause");
}