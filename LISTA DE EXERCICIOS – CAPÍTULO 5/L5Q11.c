#include <stdio.h>

int ehPar(int n);

int main() {
    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    if (ehPar(numero)) {
        printf("%d e par.\n", numero);
    } else {
        printf("%d e impar.\n", numero);
    }
    return 0;
}

int ehPar(int n) {
    if (n % 2 == 0) {
        return 1;
    }
    return 0;
}