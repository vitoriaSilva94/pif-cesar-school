#include <stdio.h>

int main() {
    float nota;
    int faltas;
    char conceito;

    printf("Digite a nota final (0 a 10): ");
    scanf("%f", &nota);
    printf("Digite o numero de faltas: ");
    scanf("%d", &faltas);

    if (nota < 0.0 || nota > 10.0 || faltas < 0) {
        printf("Erro: nota ou faltas invalidas!\n");
        return 0;
    }

    if (nota >= 9.0) {
        conceito = (faltas <= 20) ? 'A' : 'B';
    } else if (nota >= 7.5) {
        conceito = (faltas <= 20) ? 'B' : 'C';
    } else if (nota >= 5.0) {
        conceito = (faltas <= 20) ? 'C' : 'D';
    } else if (nota >= 4.0) {
        conceito = (faltas <= 20) ? 'D' : 'E';
    } else {
        conceito = 'E';
    }

    printf("Conceito: %c\n", conceito);
    return 0;
}
