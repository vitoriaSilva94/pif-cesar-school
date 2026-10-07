#include <stdio.h>

int main() {
    int n, linha, coluna, numero = 1;

    do {
        printf("Informe o numero de linhas N: ");
        scanf("%d", &n);
    } while (n <= 0);

    for (linha = 1; linha <= n; linha++) {
        for (coluna = 1; coluna <= linha; coluna++) {
            printf("%d", numero);
            if (coluna < linha) {
                printf(" ");
            }
            numero++;
        }
        printf("\n");
    }
    return 0;
}