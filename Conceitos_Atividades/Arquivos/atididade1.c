#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    FILE *arq, *arq2;
    char frase[50];
    char caract[50];
    int i;

arq = fopen("arq.txt", "w");  

if (arq == NULL){
printf("\n Erro na abertura do arquivo \n");
}

      printf("Digite os caracteres para serem gravados no arquivo ('0' para sair):\n");

    while (1) {
        
        scanf("%c", &caract);

        if (caract == '0') {
            break;
        }
 
        fputc(caract, arq);
    }


     fclose (arq);


arq2 = fopen("arq2.txt", "w");

printf("\n Digite o uma frase para armazenar no aquivo: ");
gets(frase);

int tamanho = strlen(frase);           // --> strlen para pegar o tamanho da frase.

for(int i=0; i < tamanho; i++){
   fputc(frase[i], arq2);
}

    fclose (arq2);
}
