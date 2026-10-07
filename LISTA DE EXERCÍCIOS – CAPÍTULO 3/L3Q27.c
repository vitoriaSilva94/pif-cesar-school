#include <stdio.h>

int main() {
    int valor, restante, i, quantidade, total = 0;
    int notas[6] = {100, 50, 20, 10, 5, 2};

    do {
        printf("Informe o valor do saque (inteiro positivo): ");
        scanf("%d", &valor);
    } while (valor <= 0);

    if (valor == 1 || valor == 3) {
        printf("Valor impossivel de compor com cedulas de 100, 50, 20, 10, 5 e 2.\n");
        return 0;
    }

    restante = valor;
    for (i = 0; i < 6; i++) {
        quantidade = 0;
        while (restante >= notas[i] && restante - notas[i] != 1 && restante - notas[i] != 3) {
            restante -= notas[i];
            quantidade++;
        }
        if (quantidade > 0) {
            printf("%d cedula(s) de R$ %d\n", quantidade, notas[i]);
            total += quantidade;
        }
    }
    printf("Total de cedulas: %d\n", total);
    return 0;
}