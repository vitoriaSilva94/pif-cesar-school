#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char secreta, palpite;
    int tentativas = 0;

    srand(time(NULL));
    secreta = rand() % 26 + 'a';

    printf("Adivinhe a letra minuscula sorteada (a-z).\n");
    do {
        printf("Seu palpite: ");
        scanf(" %c", &palpite);
        tentativas++;
        if (palpite < secreta) {
            printf("Errou! A letra secreta vem DEPOIS de '%c' no alfabeto.\n", palpite);
        } else if (palpite > secreta) {
            printf("Errou! A letra secreta vem ANTES de '%c' no alfabeto.\n", palpite);
        }
    } while (palpite != secreta);

    printf("Parabens! Voce acertou a letra '%c' em %d tentativa(s).\n", secreta, tentativas);
    return 0;
}