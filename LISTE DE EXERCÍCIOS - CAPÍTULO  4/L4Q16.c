#include <stdio.h>

int main() {
    float distancia, litros, consumo;

    printf("Distancia percorrida (km): ");
    scanf("%f", &distancia);
    printf("Litros de gasolina consumidos: ");
    scanf("%f", &litros);

    if (litros <= 0) {
        printf("Erro: a quantidade de litros deve ser maior que zero!\n");
        return 0;
    }

    consumo = distancia / litros;
    printf("Consumo: %.2f km/l\n", consumo);

    if (consumo < 8.0) {
        printf("Venda o carro!\n");
    } else if (consumo <= 14.0) {
        printf("Economico!\n");
    } else {
        printf("Super economico!\n");
    }
    return 0;
}
