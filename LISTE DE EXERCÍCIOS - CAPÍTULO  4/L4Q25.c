#include <stdio.h>

int main() {
    int total, entregue, troco, restante, i, quantidade;
    int notas[6] = {100, 50, 20, 10, 5, 2};

    printf("Valor total a pagar: R$ ");
    scanf("%d", &total);
    printf("Valor entregue pelo cliente: R$ ");
    scanf("%d", &entregue);

    if (entregue < total) {
        printf("Erro: valor entregue insuficiente!\n");
        return 0;
    }

    troco = entregue - total;
    if (troco == 0) {
        printf("Nao ha troco.\n");
        return 0;
    }
    if (troco == 1 || troco == 3) {
        printf("Troco de R$ %d impossivel de compor com cedulas de 100, 50, 20, 10, 5 e 2.\n", troco);
        return 0;
    }

    printf("Troco: R$ %d\n", troco);
    restante = troco;
    for (i = 0; i < 6; i++) {
        quantidade = 0;
        while (restante >= notas[i] && restante - notas[i] != 1 && restante - notas[i] != 3) {
            restante -= notas[i];
            quantidade++;
        }
        if (quantidade > 0) {
            printf("%d cedula(s) de R$ %d\n", quantidade, notas[i]);
        }
    }
    return 0;
}
