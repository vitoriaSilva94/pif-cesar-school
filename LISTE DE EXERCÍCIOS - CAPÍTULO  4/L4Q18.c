#include <stdio.h>

int main() {
    int opcao;
    float t;

    printf("===== CONVERSOR DE TEMPERATURA =====\n");
    printf("1. Celsius para Fahrenheit\n");
    printf("2. Celsius para Kelvin\n");
    printf("3. Fahrenheit para Celsius\n");
    printf("4. Kelvin para Celsius\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    if (opcao < 1 || opcao > 4) {
        printf("Erro: opcao invalida!\n");
        return 0;
    }

    printf("Digite a temperatura: ");
    scanf("%f", &t);

    switch (opcao) {
        case 1:
            printf("%.2f C = %.2f F\n", t, t * 1.8 + 32);
            break;
        case 2:
            printf("%.2f C = %.2f K\n", t, t + 273.15);
            break;
        case 3:
            printf("%.2f F = %.2f C\n", t, (t - 32) / 1.8);
            break;
        case 4:
            printf("%.2f K = %.2f C\n", t, t - 273.15);
            break;
    }
    return 0;
}
