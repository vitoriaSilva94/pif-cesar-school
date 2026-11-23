#include <stdio.h>

long potencia(int base, int expoente);

int main() {
    int base, expoente;

    printf("Digite a base: ");
    scanf("%d", &base);
    printf("Digite o expoente (nao negativo): ");
    scanf("%d", &expoente);

    if (expoente < 0) {
        printf("Erro: o expoente nao pode ser negativo.\n");
    } else {
        printf("%d elevado a %d = %ld\n", base, expoente, potencia(base, expoente));
    }
    return 0;
}

long potencia(int base, int expoente) {
    /* Caso base: qualquer numero elevado a 0 e 1 */
    if (expoente == 0) {
        return 1;
    }
    /* Passo recursivo: base^expoente = base * base^(expoente - 1) */
    return (long)base * potencia(base, expoente - 1);
}