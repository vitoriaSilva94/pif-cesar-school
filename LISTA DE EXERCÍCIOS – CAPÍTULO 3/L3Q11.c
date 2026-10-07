#include <stdio.h>

int main() {
    int a, b, i;

    printf("Informe o valor de A: ");
    scanf("%d", &a);
    printf("Informe o valor de B: ");
    scanf("%d", &b);

    if (a <= b) {
        for (i = a; i <= b; i++) {
            printf("%d ", i);
        }
    } else {
        for (i = a; i >= b; i--) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}