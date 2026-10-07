#include <stdio.h>

void versaoFor() {
    int i;
    for (i = 0; i <= 100; i++) {
        printf("%d ", i);
    }
    printf("\n");
}

void versaoWhile() {
    int i = 0;
    while (i <= 100) {
        printf("%d ", i);
        i++;
    }
    printf("\n");
}

void versaoDoWhile() {
    int i = 0;
    do {
        printf("%d ", i);
        i++;
    } while (i <= 100);
    printf("\n");
}

int main() {
    printf("Versao for:\n");
    versaoFor();
    printf("\nVersao while:\n");
    versaoWhile();
    printf("\nVersao do-while:\n");
    versaoDoWhile();
    return 0;
}

/*
A estrutura mais adequada para este caso e o for.
Como o numero de repeticoes e conhecido de antemao (de 0 a 100), o for reune
inicializacao, teste e incremento em uma unica linha, deixando o codigo mais
curto, legivel e com menos risco de esquecer o incremento e gerar um laco infinito.
*/