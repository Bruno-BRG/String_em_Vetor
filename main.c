#include <stdio.h>
#include <string.h>

int main() {
    char palavra[6]; // espaço para 5 letras + caractere nulo
    char letras[5];

    printf("Digite uma palavra de 5 letras: ");
    scanf("%5s", palavra); // lê no máximo 5 caracteres

    if (strlen(palavra) != 5) {
        printf("A palavra digitada não possui 5 letras.\n");
        return 1;
    }

    // Copia cada letra para o vetor de letras
    for (int i = 0; i < 5; i++) {
        letras[i] = palavra[i];
    }

    // Exibe as letras armazenadas
    printf("Letras armazenadas no vetor: ");
    for (int i = 0; i < 5; i++) {
        printf("%c ", letras[i]);
    }
    printf("\n");

    return 0;
}
