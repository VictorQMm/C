#include <stdio.h>

int main() {
    char nome[100];
    char caract;
    int cont = 0;
    FILE *arq;

    printf("Digite o nome do arquivo de texto: ");
    scanf("%s", nome);

    arq = fopen(nome, "r");

    if (arq == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    while ((caract = fgetc(arq)) != EOF) {
        
        caract = toupper(caract);

        if (caract == 'A' || caract == 'E' || caract == 'I' || caract == 'O' || caract == 'U') {
            cont++;
        }
    }

    fclose(arq);

    printf("O numero de vogais no arquivo eh : %d\n", cont);

    return 0;
}

