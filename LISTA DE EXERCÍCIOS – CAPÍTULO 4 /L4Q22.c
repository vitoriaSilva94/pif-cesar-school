#include <stdio.h>

int main() {
    float valor, aliquota;
    int estado;

    printf("Valor do produto: R$ ");
    scanf("%f", &valor);
    printf("Estado de destino (1=MG, 2=SP, 3=RJ, 4=MS): ");
    scanf("%d", &estado);

    switch (estado) {
        case 1:
            aliquota = 0.07;
            break;
        case 2:
            aliquota = 0.12;
            break;
        case 3:
            aliquota = 0.15;
            break;
        case 4:
            aliquota = 0.08;
            break;
        default:
            printf("Erro: codigo de estado invalido!\n");
            return 0;
    }

    printf("Preco final com imposto: R$ %.2f\n", valor + valor * aliquota);
    return 0;
}
