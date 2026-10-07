#include <stdio.h>

int main() {
    const int senhaSecreta = 2026;
    int tentativa, tentativas = 0, acertou = 0;

    while (tentativas < 3 && !acertou) {
        printf("Digite a senha: ");
        scanf("%d", &tentativa);
        tentativas++;
        if (tentativa == senhaSecreta) {
            acertou = 1;
        }
    }

    if (acertou) {
        printf("Acesso Concedido!\n");
        printf("Tentativas utilizadas: %d\n", tentativas);
    } else {
        printf("Conta Bloqueada por Segurança!\n");
    }
    return 0;
}