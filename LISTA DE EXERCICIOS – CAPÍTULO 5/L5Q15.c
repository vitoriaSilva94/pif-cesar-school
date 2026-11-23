#include <stdio.h>

float mediaPonderada(float n1, float n2, float n3);
void exibeSituacao(float media);

int main() {
    float a, b, c, media;

    printf("Digite a primeira nota (peso 2): ");
    scanf("%f", &a);
    printf("Digite a segunda nota (peso 3): ");
    scanf("%f", &b);
    printf("Digite a terceira nota (peso 5): ");
    scanf("%f", &c);

    media = mediaPonderada(a, b, c);
    printf("Media ponderada = %.2f\n", media);
    exibeSituacao(media);
    return 0;
}

float mediaPonderada(float n1, float n2, float n3) {
    return (n1 * 2 + n2 * 3 + n3 * 5) / 10;
}

void exibeSituacao(float media) {
    if (media >= 5.0) {
        printf("Aprovado\n");
    } else if (media >= 3.0) {
        printf("Em Recuperacao\n");
    } else {
        printf("Reprovado\n");
    }
}