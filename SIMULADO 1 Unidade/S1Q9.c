/*Questão 9. Geometria do Triângulo e Fórmula de Heron — Escreva um programa em C que leia os
comprimentos dos três lados (a, b, c) de um triângulo qualquer. 
Sabendo que o semiperímetro p é dado por (a + b + c) / 2.0, 
calcule a área do triângulo utilizando a 
**Fórmula de Heron**: Area = sqrt(p * (p -a) * (p - b) * (p - c)). 
Utilize a função sqrt() da biblioteca `<math.h>`.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main () 
{
    float comprimento1, comprimento2, comprimento3;
    printf("digite o comprimento 1:\n");
    scanf("%f",&comprimento1);
    printf("digite o comprimento 2:\n");
    scanf("%f",&comprimento2);
    printf("digite o comprimento 3:\n");
    scanf("%f",&comprimento3);

    float semiPerimetro = (comprimento1 + comprimento2 + comprimento3)/2.0;
    float area = sqrt(semiPerimetro * (semiPerimetro -comprimento1) * (semiPerimetro - comprimento2) * (semiPerimetro - comprimento3));

    printf("A área do triangulo é de:%.2f\n", area);

    return 0;
}
