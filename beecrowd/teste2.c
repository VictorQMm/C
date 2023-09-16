#include <stdlib.h>
#include <stdio.h>

main(){
    float x, y, r;
        printf("Primeiro valor: ");
            scanf("%f",&x);          // & -> Operador responsável por pegar dados na memória.
        printf("Segundo valor: ");
            scanf("%f",&y);
            r= x+y;
       printf("Resultado: %f",r);
}
