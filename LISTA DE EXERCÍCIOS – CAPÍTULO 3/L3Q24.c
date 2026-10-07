#include <stdio.h>

int main() {
    int n, i, j;

    do {
        printf("Informe uma dimensao impar N (3 a 19): ");
        scanf("%d", &n);
    } while (n < 3 || n > 19 || n % 2 == 0);

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i == j || i + j == n - 1) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}