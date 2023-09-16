// Faça um programa que receba o número sorteado por um dado de seis lados jogado vinte vezes. Mostre os números sorteados e a frequência com que apareceram.


#include <stdio.h>

int main(){
    int n1 = 0, n2 = 0, n3 = 0, n4 = 0, n5 = 0, n6 = 0, n7 = 0, n8 = 8, n9 = 9;
    int resultado[20];

    
    for (int i = 0; i < 20; i++){
        printf("Digite os numeros sorteados:\n");
        scanf("%d", &resultado[i]);

        if(resultado[i] == 1){
            n1++;

        }if(resultado[i] == 2){
            n2++;

        }if(resultado[i] == 3){
            n3++;

        }if(resultado[i] == 4){
            n4++;

        }if(resultado[i] == 5){
            n5++;

        }if(resultado[i] == 6){
            n6++;

        }if(resultado[i] == 7){
            n7++;

        }if(resultado[i] == 8){
            n8++;
            
        }if(resultado[i] == 9){
            n9++;
    }
  }
}