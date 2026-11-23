#include <stdio.h>

long fatorialIterativo(int n);
long fatorialRecursivo(int n);

int main() {
    int n;
    long f1, f2;

    printf("Digite um inteiro nao negativo: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Numero invalido!\n");
        return 0;
    }

    f1 = fatorialIterativo(n);
    f2 = fatorialRecursivo(n);

    printf("Fatorial iterativo  = %ld\n", f1);
    printf("Fatorial recursivo  = %ld\n", f2);

    if (f1 == f2) {
        printf("Os resultados coincidem.\n");
    } else {
        printf("Os resultados sao diferentes.\n");
    }
    return 0;
}

long fatorialIterativo(int n) {
    long resultado = 1;
    int i;

    for (i = 2; i <= n; i++) {
        resultado = resultado * i;
    }
    return resultado;
}

long fatorialRecursivo(int n) {
    if (n == 0) {
        return 1;
    }
    return (long)n * fatorialRecursivo(n - 1);
}