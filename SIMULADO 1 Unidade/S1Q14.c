#include <stdio.h>
 
int main() {
    const int SENHA = 2026;
    int tentativa, i;
 
    for (i = 1; i <= 3; i++) {
        printf("Tentativa %d de 3 - Digite a senha: ", i);
        scanf("%d", &tentativa);
 
        if (tentativa == SENHA) {
            printf("Acesso Concedido!\n");
            return 0;
        }
        printf("Senha incorreta.\n");
    }
 
    printf("Conta Bloqueada por Seguranca!\n");
 
    return 0;
}