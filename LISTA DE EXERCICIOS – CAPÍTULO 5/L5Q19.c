#include <stdio.h>

void contagem(int n);
void contagemCrescente(int n);

int main() {
    int n;

    printf("Digite um numero positivo: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Erro: o numero deve ser positivo.\n");
        return 0;
    }

    printf("Versao 1 (de n ate 1):\n");
    contagem(n);
    printf("Fogo!\n");

    printf("Versao 2 (de 1 ate n):\n");
    contagemCrescente(n);
    printf("Fogo!\n");
    return 0;
}

/* Versao 1: imprime ANTES da chamada recursiva.
   Por isso os numeros saem na ordem em que as chamadas sao feitas: n, n-1, ..., 1. */
void contagem(int n) {
    if (n == 0) {          /* caso base */
        return;
    }
    printf("%d\n", n);
    contagem(n - 1);
}

/* Versao 2: imprime DEPOIS da chamada recursiva.
   O printf so executa quando as chamadas voltam (desempilhamento),
   entao a ordem se inverte: 1, 2, ..., n.
   A unica mudanca e a posicao do printf em relacao a chamada recursiva. */
void contagemCrescente(int n) {
    if (n == 0) {          /* caso base */
        return;
    }
    contagemCrescente(n - 1);
    printf("%d\n", n);
}