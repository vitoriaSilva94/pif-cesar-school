#include <stdio.h>

int main() {
    int a, b, n, i, divisores;
    long int soma = 0;

    do {
        printf("Informe A (inteiro positivo): ");
        scanf("%d", &a);
        printf("Informe B (inteiro positivo, maior que A): ");
        scanf("%d", &b);
        if (a <= 0 || b <= 0 || a >= b) {
            printf("Valores invalidos. Tente novamente.\n");
        }
    } while (a <= 0 || b <= 0 || a >= b);

    printf("Primos no intervalo [%d, %d]:\n", a, b);
    for (n = a; n <= b; n++) {
        divisores = 0;
        for (i = 1; i <= n; i++) {
            if (n % i == 0) {
                divisores++;
            }
        }
        if (n > 1 && divisores == 2) {
            printf("%d ", n);
            soma += n;
        }
    }
    printf("\nSoma dos primos: %ld\n", soma);
    return 0;
}