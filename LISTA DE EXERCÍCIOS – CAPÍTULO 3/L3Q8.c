#include <stdio.h>

int main() {
    float nota;

    do {
        printf("Informe uma nota entre 0.0 e 10.0: ");
        scanf("%f", &nota);
        if (nota < 0.0 || nota > 10.0) {
            printf("Erro: nota invalida! Tente novamente.\n");
        }
    } while (nota < 0.0 || nota > 10.0);

    printf("Nota registrada com sucesso!\n");
    return 0;
}