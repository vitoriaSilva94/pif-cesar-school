#include <stdio.h>

int main() {
    float lab, semestral, final, media;

    printf("Nota do Trabalho de Laboratorio (peso 2): ");
    scanf("%f", &lab);
    printf("Nota da Avaliacao Semestral (peso 3): ");
    scanf("%f", &semestral);
    printf("Nota do Exame Final (peso 5): ");
    scanf("%f", &final);

    media = (lab * 2 + semestral * 3 + final * 5) / 10.0;
    printf("Media ponderada: %.2f\n", media);

    if (media < 3.0) {
        printf("Situacao: Reprovado\n");
    } else if (media < 5.0) {
        printf("Situacao: Em Recuperacao\n");
    } else {
        printf("Situacao: Aprovado\n");
    }
    return 0;
}
