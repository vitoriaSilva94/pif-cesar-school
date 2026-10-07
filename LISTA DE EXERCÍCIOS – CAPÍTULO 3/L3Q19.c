#include <stdio.h>

int main() {
    int n, i;
    long long int anterior = 1, atual = 1, proximo;

    do {
        printf("Informe o numero do termo desejado (N >= 1, maximo 90): ");
        scanf("%d", &n);
    } while (n < 1 || n > 90);

    printf("Termos ate N:\n");
    for (i = 1; i <= n; i++) {
        if (i <= 2) {
            printf("%lld ", 1LL);
        } else {
            proximo = anterior + atual;
            anterior = atual;
            atual = proximo;
            printf("%lld ", atual);
        }
    }
    printf("\n");
    printf("Termo %d da sequencia: %lld\n", n, n <= 2 ? 1LL : atual);
    return 0;
}