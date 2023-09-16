//Crie um programa que leia um vetor vet contendo 18 elementos. A seguir, o programa deverá distribuir ordenadamente esses elementos em uma matriz 3 × 6 e, no final, mostrar a matriz.


#include <stdio.h>

int main() {
    int vet[18];
    int matriz[3][6];
    
   
    printf("Preencha o vetor com valores inteiros: ");
    for (int i = 0; i < 18; i++) {
        scanf("%d", &vet[i]);
    }
    
    for (int i = 0; i < 18 - 1; i++) {
        for (int j = 0; j < 18 - i - 1; j++) {
            if (vet[j] > vet[j + 1]) {
                int temp = vet[j];
                vet[j] = vet[j + 1];
                vet[j + 1] = temp;
            }
        }
    }
    int help = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 6; j++) {
            matriz[i][j] = vet[help++];
        }
    }
    printf("Matriz 3x6 ordenada:");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 6; j++) {
            printf("%d ", matriz[i][j]);
        }
    
    }
    
  
}
