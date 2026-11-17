#include <stdio.h>

int main() {
    int n;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    if (n % 2 == 0) {
        printf("O numero %d e PAR.\n", n);
    } else {
        printf("O numero %d e IMPAR.\n", n);
    }

    if (n > 0) {
        printf("O numero %d e POSITIVO.\n", n);
    } else if (n < 0) {
        printf("O numero %d e NEGATIVO.\n", n);
    } else {
        printf("O numero e ZERO.\n");
    }
    return 0;
}
