/* Questão 28. Cálculo de Salário Anual com Imposto Progressivo — Uma empresa metalúrgica
remunera seus operários à taxa de R$ 10,00 por hora normal trabalhada e R$ 15,00 por hora
extra (adicional de 50%). Desenvolva um programa completo em C que receba do usuário o
número total de horas normais e de horas extras trabalhadas por um empregado no acumulado de
um ano. O programa deve calcular e exibir: a) O salário anual bruto obtido; b) O imposto
progressivo a ser pago sabendo que o trabalhador é isento de imposto para salários até R$
12.000,00 anuais, mas paga 10% de imposto retido sobre o valor que exceder essa faixa de isenção. 
Dica: utilize expressões aritméticas lineares e o operador condicional (? :) para simular a
tomada de decisão de imposto sem recorrer a laços ou desvios complexos neste capítulo.*/

#include <stdio.h>
 
int main() {
    int horas_normais, horas_extras;
 
    printf("Horas normais trabalhadas no ano: ");
    scanf("%d", &horas_normais);
    printf("Horas extras trabalhadas no ano: ");
    scanf("%d", &horas_extras);
 
    float salario_bruto = horas_normais * 10.0 + horas_extras * 15.0;
 
    float excedente = salario_bruto - 12000.0;
    float imposto   = (salario_bruto > 12000.0) ? excedente * 0.10 : 0.0;
    float liquido   = salario_bruto - imposto;
 
    printf("\nSalario anual bruto:  R$ %.2f\n", salario_bruto);
    printf("Imposto retido:       R$ %.2f\n", imposto);
    printf("Salario anual liquido: R$ %.2f\n", liquido);
 
    return 0;
}