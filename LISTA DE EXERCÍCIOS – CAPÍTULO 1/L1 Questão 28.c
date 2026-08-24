/*Desenvolva um programa em C que leia três valores numéricos inteiros fornecidos pelo
usuário através do teclado, calcule a média aritmética simples desses valores como um número real de
dupla precisão (double) e exiba o resultado final na tela formatado com exatamente duas casas
decimais.*/
#include <stdio.h>
int main ()
{
    int num1;
    int num2;
    int num3;
    
    printf("------------------------\n");
    printf("Calculadora de média\n");
    printf("------------------------\n");

    printf("Digite o primeiro número:\n");
    scanf("%d", &num1);
    printf("Digite o segundo número:\n");
    scanf("%d", &num2);
    printf("Digite o terceiro número:\n");
    scanf("%d", &num3);

    float media = (num1 + num2 + num3)/3;

    printf("A média é: %.2f",media);


    return 0;
}