#include <stdio.h>

int main() {
    float nota, maior = 0.0, menor = 10.0, soma = 0.0;
    int total = 0;

    printf("Digite as notas (0.0 a 10.0). Digite -1.0 para encerrar:\n");
    scanf("%f", &nota);

    while (nota != -1.0) {
        if (nota >= 0.0 && nota <= 10.0) {
            if (nota > maior) {
                maior = nota;
            }
            if (nota < menor) {
                menor = nota;
            }
            soma += nota;
            total++;
        } else {
            printf("Nota invalida, ignorada.\n");
        }
        scanf("%f", &nota);
    }

    if (total == 0) {
        printf("Nenhuma nota valida foi informada.\n");
    } else {
        printf("Total de alunos avaliados: %d\n", total);
        printf("Maior nota: %.2f\n", maior);
        printf("Menor nota: %.2f\n", menor);
        printf("Media geral: %.2f\n", soma / total);
    }
    return 0;
}