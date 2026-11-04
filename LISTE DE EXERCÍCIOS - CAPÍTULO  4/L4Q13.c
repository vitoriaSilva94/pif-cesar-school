#include <stdio.h>
#include <math.h>

int main() {
    char op;
    double a, b;

    printf("===== CALCULADORA =====\n");
    printf("+ : Soma\n");
    printf("- : Subtracao\n");
    printf("* : Multiplicacao\n");
    printf("/ : Divisao\n");
    printf("^ : Potenciacao\n");
    printf("Escolha a operacao: ");
    scanf(" %c", &op);

    printf("Digite o primeiro operando: ");
    scanf("%lf", &a);
    printf("Digite o segundo operando: ");
    scanf("%lf", &b);

    switch (op) {
        case '+':
            printf("%.2f + %.2f = %.2f\n", a, b, a + b);
            break;
        case '-':
            printf("%.2f - %.2f = %.2f\n", a, b, a - b);
            break;
        case '*':
            printf("%.2f * %.2f = %.2f\n", a, b, a * b);
            break;
        case '/':
            if (b == 0) {
                printf("Erro: divisao por zero nao e permitida!\n");
            } else {
                printf("%.2f / %.2f = %.2f\n", a, b, a / b);
            }
            break;
        case '^':
            printf("%.2f ^ %.2f = %.2f\n", a, b, pow(a, b));
            break;
        default:
            printf("Erro: operacao invalida!\n");
    }
    return 0;
}
