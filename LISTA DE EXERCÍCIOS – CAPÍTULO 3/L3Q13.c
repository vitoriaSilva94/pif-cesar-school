#include <stdio.h>

int main() {
    int n, i;
    long long int fatorial = 1;

    printf("Informe um numero inteiro: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Erro: nao existe fatorial de numero negativo.\n");
        return 0;
    }
    if (n > 20) {
        printf("Erro: o resultado excede a capacidade do tipo long long int (maximo 20).\n");
        return 0;
    }

    for (i = 2; i <= n; i++) {
        fatorial *= i;
    }
    printf("%d! = %lld\n", n, fatorial);
    return 0;
}