#include <stdio.h>
#include <math.h>

float raiz(int x){
    float raiz;
    raiz = sqrt(x);
    return raiz;
}

int main(){
    int x;
    float r;

    printf("Digite um valor para saber a raiz quadrada: ");
    scanf("%d", &x);

    r = raiz(x);
    printf("\n A raiz eh: %.1f", r);

    return 0;
}