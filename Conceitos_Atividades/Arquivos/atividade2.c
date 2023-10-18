#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    FILE *exemplo2;
   

exemplo2 = fopen("exemplo2.txt", "r");  

if (exemplo2 == NULL){
printf("\n Erro na abertura do arquivo \n");
    }
}
