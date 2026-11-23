#include <stdio.h>

/* Para ativar o modo de depuracao, tire o comentario da linha abaixo
   (ou compile com: gcc -DDEBUG questao24.c -o questao24.exe) */
/* #define DEBUG */

int somaAteN(int n);

int main() {
    int n;

    printf("Digite n: ");
    scanf("%d", &n);

    printf("Soma de 1 ate %d = %d\n", n, somaAteN(n));
    return 0;
}

int somaAteN(int n) {
    int i, soma = 0;

    for (i = 1; i <= n; i++) {
        soma += i;
#ifdef DEBUG
        printf("[DEBUG] i = %d, soma parcial = %d\n", i, soma);
#endif
    }
    return soma;
}

/* Diferenca de comportamento:
   - SEM DEBUG: o pre-processador remove o printf de depuracao antes de compilar;
     o programa mostra apenas o resultado final.
   - COM DEBUG: o printf entra no codigo, e a cada iteracao do laco
     aparece a soma parcial, alem do resultado final. */