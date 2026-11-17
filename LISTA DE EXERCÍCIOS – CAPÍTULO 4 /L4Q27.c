#include <stdio.h>

int main() {
    int horas;
    float valor;

    printf("Numero de horas de permanencia: ");
    scanf("%d", &horas);

    if (horas <= 0) {
        printf("Erro: informe pelo menos 1 hora.\n");
        return 0;
    }

    if (horas <= 2) {
        valor = horas * 2.00;
    } else if (horas <= 4) {
        valor = 2 * 2.00 + (horas - 2) * 2.50;
    } else {
        valor = 2 * 2.00 + 2 * 2.50 + (horas - 4) * 3.00;
    }

    printf("Tempo total: %d hora(s)\n", horas);
    printf("Valor do ticket: R$ %.2f\n", valor);
    return 0;
}
