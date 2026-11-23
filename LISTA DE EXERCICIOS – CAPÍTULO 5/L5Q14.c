#include <stdio.h>

int somaDigitos(int n);

int main() {
    int numero;

    printf("Digite um inteiro positivo: ");
    scanf("%d", &numero);

    printf("Soma dos digitos = %d\n", somaDigitos(numero));
    return 0;
}

int somaDigitos(int n) {
    /* Caso base: quando n tem um unico digito (n < 10), a soma e o proprio n */
    if (n < 10) {
        return n;
    }
    /* Passo recursivo: ultimo digito (n % 10) + soma dos digitos do resto (n / 10) */
    return (n % 10) + somaDigitos(n / 10);
}