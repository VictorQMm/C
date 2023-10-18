#include <stdio.h>
#include <stdlib.h>

void preencher(int vetor[], int tamanho)
{
    for (int i = 0; i < tamanho; i++){
        vetor[i] = rand() % 100;
        printf("%d ", vetor[i]);
    }
}

int verifique(int vetor[], int tamanho, int num){

    for(int i = 0; i < tamanho; i++){
    if(vetor[i] == num){
        return 1;
        }
    }
    return 0;
}

int main(){

    srand(time(NULL));      //  --> Vai gerar numeros aleatórios dependendo do horário. 

    int tamanho;

    printf("Insira o tamanho do vetor:" );
    scanf("%d", &tamanho);

    int vetor[tamanho];
    int num;

    preencher(vetor, tamanho);

    printf("\nDigite um numero aleatorio: ");
    scanf("%d", &num);

    int resultado = verifique(vetor, tamanho, num);

    if (resultado) {
        printf("O numero %d esta no vetor.\n", num);
    } else {
        printf("O numero %d nao esta presente no vetor.\n", num);
    }


}





    