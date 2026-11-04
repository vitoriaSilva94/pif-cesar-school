#include <stdio.h>

int main() {
    int ano;

    do {
        printf("Informe um ano (inteiro positivo): ");
        scanf("%d", &ano);
    } while (ano <= 0);

    if (ano % 400 == 0 || (ano % 4 == 0 && ano % 100 != 0)) {
        printf("O ano %d e bissexto.\n", ano);
    } else {
        printf("O ano %d nao e bissexto.\n", ano);
    }
    return 0;
}
