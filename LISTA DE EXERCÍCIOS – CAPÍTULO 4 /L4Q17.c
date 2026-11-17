#include <stdio.h>

int main() {
    float valor, final, comissao;
    int opcao;

    printf("Valor total da compra: R$ ");
    scanf("%f", &valor);
    printf("Forma de pagamento (1 = A Vista com 10%% de desconto; 2 = Parcelado em 3x): ");
    scanf("%d", &opcao);

    if (opcao == 1) {
        final = valor * 0.90;
        comissao = final * 0.05;
        printf("Valor final a pagar (a vista): R$ %.2f\n", final);
        printf("Comissao do vendedor: R$ %.2f\n", comissao);
    } else if (opcao == 2) {
        comissao = valor * 0.05;
        printf("Valor de cada parcela (3x): R$ %.2f\n", valor / 3);
        printf("Comissao do vendedor: R$ %.2f\n", comissao);
    } else {
        printf("Erro: opcao de pagamento invalida!\n");
    }
    return 0;
}
