#include <stdio.h>

int main() {
    int n, i, divisores = 0;

    do {
        printf("Informe um numero inteiro positivo: ");
        scanf("%d", &n);
    } while (n <= 0);

    for (i = 1; i <= n; i++) {
        if (n % i == 0) {
            divisores++;
        }
    }

    printf("Quantidade de divisores de %d: %d\n", n, divisores);
    if (n > 1 && divisores == 2) {
        printf("%d e um numero primo.\n", n);
    } else {
        printf("%d nao e um numero primo.\n", n);
    }
    return 0;
}