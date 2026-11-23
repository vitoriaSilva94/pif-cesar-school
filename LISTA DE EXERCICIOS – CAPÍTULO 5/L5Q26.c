#include <stdio.h>

long fibonacci(int n);

int main() {
    int qtd, i;

    printf("Quantos termos da sequencia? ");
    scanf("%d", &qtd);

    if (qtd <= 0) {
        printf("Erro: digite um numero positivo.\n");
        return 0;
    }

    for (i = 0; i < qtd; i++) {
        printf("%ld ", fibonacci(i));
    }
    printf("\n");
    return 0;
}

long fibonacci(int n) {
    /* Casos base: fibonacci(0) = 0 e fibonacci(1) = 1 */
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    /* Passo recursivo: soma dos dois termos anteriores */
    return fibonacci(n - 1) + fibonacci(n - 2);
}

/* Por que fica lenta para n grande: cada chamada gera duas novas chamadas,
   e os mesmos valores sao recalculados muitas vezes
   (fibonacci(5) calcula fibonacci(3) duas vezes, fibonacci(2) tres vezes...).
   O numero de chamadas cresce de forma exponencial com n. */