#include <stdio.h>

int main() {
    int num, i, encontrou = 0;

    do {
        printf("Informe um numero limite inteiro positivo: ");
        scanf("%d", &num);
    } while (num <= 0);

    for (i = 1; i <= num; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            printf("%d ", i);
            encontrou = 1;
        }
    }

    if (encontrou) {
        printf("\n");
    } else {
        printf("Nenhum numero no intervalo e multiplo de 3 e de 5 ao mesmo tempo.\n");
    }
    return 0;
}