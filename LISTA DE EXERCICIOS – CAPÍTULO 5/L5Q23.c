#include <stdio.h>

#define DOBRO(x) x*2
#define DOBRO_OK(x) ((x) * 2)

int dobro(int x);

int main() {
    /* A macro sem parenteses faz so uma troca de texto:
       DOBRO(2+3) vira 2+3*2, e a multiplicacao tem precedencia: 2 + 6 = 8.
       A funcao recebe o valor ja calculado (5) e devolve 5 * 2 = 10.
       Por isso os resultados diferem. */
    printf("Macro DOBRO(2+3)    = %d\n", DOBRO(2+3));
    printf("Funcao dobro(2+3)   = %d\n", dobro(2+3));

    /* Macro corrigida com parenteses de protecao: ((2+3) * 2) = 10 */
    printf("Macro corrigida     = %d\n", DOBRO_OK(2+3));
    return 0;
}

int dobro(int x) {
    return x * 2;
}